#include "../inc/libmx.h"
int main() {
char *s = "**Good bye,**Mr.*Anderson.****";

printf("%s", mx_strsplit(s, '*')[2]);
    //system("leaks -q main");
    return 0;
// char *p;
// p = (char *) malloc(17);
// if(!p) {
// printf("Allocation error.");
// exit (1);
// }
// strcpy(p, "This is 16 chars");
// p = (char *) mx_realloc (p,18);
// if(!p) {
// printf("Allocation error.");
// exit (1);
// }
// strcat (p, ".");
// printf("%s",p);
// free(p);

}
