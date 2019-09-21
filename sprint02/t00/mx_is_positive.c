void mx_printstr(const char *s);
void mx_is_positive(int i);

void mx_is_positive(int i){
    if(i > 0){
        mx_printstr("positive");
    }
    else if (i == 0){
        mx_printstr("zero");
    }
    else if (i < 0){
        mx_printstr("negative");
    }  
}
