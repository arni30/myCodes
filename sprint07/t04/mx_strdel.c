#include <stdlib.h>
	#include <stdio.h>
	
	void mx_strdel(char **str);
	int main(){
    char *str = malloc(sizeof(char*));
    for (int i=0;i< 7;i++)
    {
    	      str[i] = 'a';
      }
	    str[7] = '\0';	  
        mx_strdel(&str);
        printf("%s", str);	
    }	
        void mx_strdel(char **str){	    
            if(*str != NULL || str != NULL){
	        free(str);
            *str = NULL;
	    }
}
