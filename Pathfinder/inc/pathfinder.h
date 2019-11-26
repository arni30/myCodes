#define PATHFINDER_H
#ifdef PATHFINDER_H

#include "../libmx/inc/libmx.h"

void mx_dejkstry_algorithm(char **unique, unsigned long **matrix_distances, int num_of_islands, int *s, int *c, unsigned long *b);
char **mx_separate_string(char *str);
void mx_output(int l, char **unique, int num_of_islands, int *c, unsigned long *b, int *c_extra);
void mx_find_errors(int argc, char **argv);
char **mx_unique_islands(char **str);
void mx_matrix_dst(char **unique, char **res);
int *mx_arr_skip_first_string(char **unique, char **res);
int **mx_three_col_matrix(int *arr, int len);
#endif
