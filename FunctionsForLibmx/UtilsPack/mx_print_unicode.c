#include "libmx.h"
#include <ldap_utf8.h>
#include <stdio.h>
void mx_print_unicode(wchar_t c){
  int mask = 63;
  
      if(c < 128){
          char res = c;
          write(1, &res, sizeof(res));
      }
      else if(c >= 128 && c < 2048){
          char res[2];
          res[0] = (c >> 6) + 0xc0;//b2
          res[1] = (c & mask) + 0x80;//b1
          write(1, res ,sizeof(res));
      }
      else if (c < 65536 && (c < 55296 || c > 57343)){
        // char res[3];
        // res[1] = (c & mask) + 0x80;//b1
        // printf("%d\n",res[1]);

        // res[0] = ((c >> 11)&mask); //b2
        // printf("%d\n",res[0]);
        
        // res[2] = (c - res[1] - (64*res[0]))/ 0x1000;
        // printf("%d\n",res[2]);
  
        //write(1, res, sizeof(res));
      }
}
