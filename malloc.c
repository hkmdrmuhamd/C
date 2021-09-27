#include <stdio.h>
#include <stdlib.h>

int main()
{
   char *ptr;
   int boyut,i=0;

   printf("Bir boyut degeri giriniz:");
   scanf("%d",&boyut);

   ptr=(char *)malloc(boyut*sizeof(char));
  while(i<boyut)
  {
        printf("Bir isim giriniz:   ");
        scanf("%s",ptr);
        printf("Girilen isim:   %s\n",ptr);
        i++;
   }

   free(ptr);
  return 0;
}
