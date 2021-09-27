#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j,boyut;
   char isim[10];
   printf("Bir isim giriniz:");
   scanf("%s",isim);
   boyut=sizeof(isim)/sizeof(isim[0]);
   for (i=0;i<boyut;i++)
   {
       for (j=0;j<boyut;j++)
       {
           if(j<=i)
           {
               printf("%c",isim[j]);
           }
       }
       printf("\n");
   }
    return 0;
}
