#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*printf("DURM 1\n");
   int var1=1, var2=2;
   int *const ptr =&var1;
   printf("ptr: %d\n",*ptr);
   //ptr=&var2;   //burayi acarsak hata verir cunku const ile adresi sabitledik tekrardan degistiremeyiz.
   //printf("ptr: %d\n",*ptr);*/

   /*printf("DURUM 2\n");
   int var1=1, var2=2;
   const int*ptr=&var1;
   printf("ptr: %d\n",*ptr);
   //*ptr=1; burayi acarsak hata verir cunku const ile sayi degerini sabitledik tekrar degistiremeyiz.
   ptr=&var2;
   printf("ptr: %d\n",*ptr);*/

   /*printf("DURUM 3\n");
   int var1=1, var2=2;
   const int *const ptr=&var1;
   //*prt=1;     burayi acarsak hata verir cunku const ile adres sabitlemis.
   //ptr=&var2;  burayi acarsak hata verir cunku const ile adres sabitlemis.
   //*ptr=2;     burayi acaarsak hata verir cunku const ile deger sabitlenmis.
   printf("ptr: %d\n",*ptr);*/
    return 0;
}
