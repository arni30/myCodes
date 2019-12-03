NAME = pathfinder
SRC = src/main.c src/mx_dejkstry_algorithm.c src/mx_find_errors.c src/mx_matrix_dst.c src/mx_separate_string.c src/mx_unique_islands.c src/mx_three_col_matrix.c src/mx_arr_skip_first_string.c src/mx_output.c src/mx_print_path.c src/mx_print_dst.c src/mx_count_path.c src/mx_print_extra_way.c src/mx_print_way.c src/mx_main_step.c src/mx_initialization.c src/mx_error_usage.c src/mx_first_line_valid.c src/mx_file_errors.c src/mx_line_valid.c src/mx_loop_for_line_valid.c src/mx_print_error_line.c src/mx_free_void_arr.c src/mx_find_unique.c src/mx_swaps_arr.c src/mx_print_route.c src/mx_find_way.c src/mx_find_extra_way.c
SRCOB = main.o mx_dejkstry_algorithm.o mx_find_errors.o mx_matrix_dst.o mx_separate_string.o mx_unique_islands.o mx_three_col_matrix.o mx_arr_skip_first_string.o mx_output.o mx_print_path.o mx_print_dst.o mx_count_path.o mx_print_extra_way.o mx_print_way.o mx_main_step.o mx_initialization.o mx_error_usage.o mx_first_line_valid.o mx_file_errors.o mx_line_valid.o mx_loop_for_line_valid.o mx_print_error_line.o mx_free_void_arr.o mx_find_unique.o mx_swaps_arr.o mx_print_route.o mx_find_way.o mx_find_extra_way.o
INC = inc/pathfinder.h
OBJ = obj/main.o obj/mx_dejkstry_algorithm.o obj/mx_find_errors.o obj/mx_matrix_dst.o obj/mx_separate_string.o obj/mx_unique_islands.o obj/mx_three_col_matrix.o obj/mx_arr_skip_first_string.o obj/mx_output.o obj/mx_print_path.o obj/mx_print_dst.o obj/mx_count_path.o obj/mx_print_extra_way.o obj/mx_print_way.o obj/mx_main_step.o obj/mx_initialization.o obj/mx_error_usage.o obj/mx_first_line_valid.o obj/mx_file_errors.o obj/mx_line_valid.o obj/mx_loop_for_line_valid.o obj/mx_print_error_line.o obj/mx_free_void_arr.o obj/mx_find_unique.o obj/mx_swaps_arr.o obj/mx_print_route.o obj/mx_find_way.o obj/mx_find_extra_way.o
DIR = obj/
LIBMX = libmx
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: install clean

install:
	@make -C $(LIBMX)
	@mkdir obj
	@clang $(CFLAGS) -c $(SRC)
	@cp $(SRCOB) $(DIR)
	@clang $(CFLAGS) -o $(NAME) $(OBJ) -L./libmx -lmx

uninstall: clean
	@rm -rf $(NAME)
	@make uninstall -C $(LIBMX)

clean:	
	@rm -rf $(SRCOB)
	@rm -rf $(DIR)

reinstall: uninstall all
	@rm -rf $(SRCOB)
	@rm -rf $(DIR)