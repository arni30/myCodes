#include "ush.h"

void mx_clear_str() {
    write(STDOUT_FILENO, "\033[2K", 4);
    mx_printstr("\033[G");
}

static void case_backspace(t_input *input, t_ush *ush) {
    input->coursor_position--;
    input->len--;
    mx_clear_str();
    if (input->term_width > input->len + 8)
        mx_print_prompt(0, ush);
    mx_delete_char(input, input->coursor_position);
    if (input->term_width > input->len + 8) {
        mx_printstr(input->command);
        if (input->coursor_position != input->len)
            mx_move_coursor(input->len - input->coursor_position, "D");
    }
}

static void one_line_input(t_input *input, t_ush *ush){
    if (input->coursor_position != input->len)
        mx_insert_char(input, input->input_ch, input->coursor_position);
    else if (input->command != NULL) {
        input->command = realloc(input->command, input->len + 2);
        input->command[input->len] = (char) input->input_ch;
        input->command[input->len + 1] = '\0';
    }
    else {
        input->command = mx_strnew(1000);//?
        input->command[input->len] = (char) input->input_ch;
    }
    input->len++;
    input->coursor_position++;
    if (input->coursor_position != input->len) {
        mx_clear_str();
        mx_print_prompt(0, ush);
        mx_printstr(input->command);
        mx_move_coursor(input->len - input->coursor_position, "D");
    }
    else
        mx_printchar((char) input->input_ch);
}

static void case_default(t_input *input, t_ush *ush) {
    if (input->len + 8 > input->term_width) {
        mx_printerr("\nush: input string is too long");
        input->term_width = 0;
    }
    else {
        one_line_input(input, ush);
    }
}

char *mx_fill_command(t_input *input, t_ush *ush) {
    char *ret_str = NULL;

    switch (input->input_ch) {
        case MX_BACKSPACE:
            if (input->coursor_position > 0)
                case_backspace(input, ush);
            break;
        case MX_ENTER:
            ret_str = mx_strtrim(input->command);
            break;
        case MX_TAB:
            if (input->len != 0)
                mx_tab(input, ush);
            break;
        default:
            case_default(input, ush);
            break;
    }
    return  ret_str;
}

