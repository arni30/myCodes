#ifndef DUPLICATE_HEADER        
#define DUPLICATE_HEADER
typedef struct s_intarr
{
    int *arr;
    int size;
} t_intarr;
t_intarr *mx_del_dup_sarr(t_intarr *src);
int *mx_copy_int_arr(const int *src, int size);
int *mx_del_dup_arr(int *src, int src_size, int *dst_size);
#endif
