#include "../inc/libmx.h"

int main() {
    unsigned char src[15]="1234567890";

   // Массив приемник данных
   unsigned char dst[15]= "";

   // Копируем данные из массива src в массив dst
   mx_memccpy (dst, src,'5', 10);

   // Вывод массива dst на консоль
   printf ("dst: %s\n",dst);
    return 0;
}
