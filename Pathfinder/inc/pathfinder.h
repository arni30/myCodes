#define PATHFINDER_H
#ifdef PATHFINDER_H

#include "../libmx/inc/libmx.h"

int mx_find_extra_way(int *c, int *c_e, int st, int end, int *route, int *fl);
int mx_find_way(int *c, int *c_e, int start, int end, int *route, int *flag);
void mx_print_route(char **unique, int *route, int i);
void mx_free_void_arr(void **arr, int lines);
int mx_loop_for_line_valid(int count, char **str);
void mx_file_errors(const char *file);
void mx_error_usage(int argc);
void mx_first_line_valid(char **str);
void mx_line_valid(char **str, char *file);
void mx_print_error_line(int count);
char **mx_swaps_arr(char **arr, int counter);
int mx_find_unique(int count, char **str, char **arr);
void mx_initialization(int num_of_islands, int *s, int *c_extra, int *c, unsigned long *b, unsigned long **matrix_distances, int l);
void mx_main_step(int num_of_islands, int *temp, unsigned long *b, int *s, unsigned long **matrix_distances, int *c, int *c_extra);
void mx_print_way(int *route, char **unique, int *c, int *c_e, unsigned long **matrix_dist, int start, int end, int *flag, int *j);
void mx_print_extra_way(int *route, char **uni, int *c, int *c_e, unsigned long **matrix, int start, int end, int *flag, int *j);
int mx_count_path(int start, int num_of_islands, int *c, int *c_e);
void mx_print_dst(unsigned long **matrix, int start, int *route, int size_r);
void mx_print_path(char **unique, int start, int end);
void mx_dejkstry_algorithm(char **unique, unsigned long **matrix, int island);
char **mx_separate_string(char *str);
void mx_output(unsigned long **matrix, int l, char **uni, int n_uni, int *c, int *c_e);
void mx_find_errors(int argc, char **argv);
char **mx_unique_islands(char **str);
void mx_matrix_dst(char **unique, char **res);
int *mx_arr_skip_first_string(char **unique, char **res);
int **mx_three_col_matrix(int *arr, int len);

#endif
