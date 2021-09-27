#include <stdio.h>
#include <stdlib.h>

int main()
{
   char harf='a';
   char *pt=&harf;

   printf("Adres1= %p\n",pt);
   pt++;
   printf("Adres2= %p\n",pt);
   pt--;
   printf("Adres3= %p\n",pt);
   pt+=5;
   printf("Adres4= %p\n",pt);
    return 0;
}
