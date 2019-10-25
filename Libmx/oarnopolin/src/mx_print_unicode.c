#include "libmx.h"

void mx_print_unicode(wchar_t c){
    int mask = 63;
  
    if(c < 128){
        char res = c;
        write(1, &res, sizeof(res));
    }
    else if(c >= 128 && c < 2048){
        unsigned char res[2];
        res[0] = (c >> 6) + 0xc0;//b2
        res[1] = (c & mask) + 0x80;//b1
        write(1, res ,sizeof(res));
    }
    else if (c < 65536  && (c < 55296 || c > 57343) ){
        unsigned char res[3];
      
        res[2] = (c & mask) + 0x80;//b1
        res[1] = ((c >> 6)&mask)+0x80; //b2
        res[0] = ((c - (c & mask) - (64*((c >> 6)&mask)))/ 0x1000)+0xe0;//b3
        write(1, res, sizeof(res));
        }
}
