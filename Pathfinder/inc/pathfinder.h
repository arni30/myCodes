#define PATHFINDER_H
#ifdef PATHFINDER_H

#include "../libmx/inc/libmx.h"

void mx_free_void_arr(void **arr, int lines);
int mx_loop_for_line_valid(int count, char **str);
void mx_file_errors(const char *file);
void mx_error_usage(int argc);
void mx_first_line_valid(char **str);
void mx_line_valid(char **str);
void mx_print_error_line(int count);
char **mx_swaps_arr(char **arr, int counter);
int mx_find_unique(int count, char **str, char **arr);
void mx_change_unused_values(int *c_extra, int *c, unsigned long *b, int start);
void mx_initialization(int num_of_islands, int *s, int *c_extra, int *c, unsigned long *b, unsigned long **matrix_distances, int l);
void mx_main_step(int num_of_islands, int *temp, unsigned long *b, int *s, unsigned long **matrix_distances, int *c, int *c_extra);
int mx_print_way(int *route, char **unique, int *c, int *c_extra, unsigned long **matrix_distances, int start, int end);
int mx_print_extra_way(int *route, char **unique, int *c, int *c_extra, unsigned long **matrix_distances, int start, int end);
int mx_count_path(int start, int num_of_islands, int *c, int *c_extra);
void mx_print_dst(unsigned long **matrix_distances, int start, int *route, int size_route);
void mx_print_path(char **unique, int start, int end);
void mx_dejkstry_algorithm(char **unique, unsigned long **matrix_distances, int num_of_islands);
char **mx_separate_string(char *str);
void mx_output(unsigned long **matrix_distances, int l, char **unique, int num_of_islands, int *c, int *c_extra);
void mx_find_errors(int argc, char **argv);
char **mx_unique_islands(char **str);
void mx_matrix_dst(char **unique, char **res);
int *mx_arr_skip_first_string(char **unique, char **res);
int **mx_three_col_matrix(int *arr, int len);
#endif
