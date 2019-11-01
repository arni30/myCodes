#include "libmx.h"

int main(){
int *data = malloc(4 * sizeof *data);
mx_realloc(data,4*sizeof(*data));

}
