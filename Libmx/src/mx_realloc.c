#include "../inc/libmx.h"

void *mx_realloc(void *ptr, size_t size){
   
   if (size == 0)
   {
      free(ptr);
      return NULL;
   }
   else if (!ptr)
   {
      return malloc(size);
   }
   else{
        void *ptrNew = malloc(size);
        if (ptrNew){
          mx_memcpy(ptrNew, ptr, size);
          free(ptr);
        }
        return ptrNew;
    }
}

