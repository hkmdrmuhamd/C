#include <stdio.h>
#include <stdlib.h>


int main()
{
   int diziler[3][3];
   int i,j,buyuk_sayi,kucuk_sayi;
   int boyut=sizeof(diziler)/sizeof(diziler[0]);

   for (i=0;i<boyut;i++)
   {
       for (j=0;j<boyut;j++)
       {
           printf("Matrise atamak istediginiz bir sayi giriniz --> ");
           scanf(" %d",&diziler[i][j]);
       }
   }
   printf("\n");
   for(i=0;i<boyut;i++)
   {
       for (j=0;j<boyut;j++)
       {
           printf("%d\t",diziler[i][j]);
       }
       printf("\n");
   }

   for (i=0;i<boyut;i++)
   {
       for(j=0;j<boyut;j++)
       {
            if (buyuk_sayi<diziler[i][j])
            {
                buyuk_sayi=diziler[i][j];
            }
       }
   }
       for (i=0;i<boyut;i++)
   {
       for(j=0;j<boyut;j++)
       {
            if (kucuk_sayi>diziler[i][j])
            {
                kucuk_sayi=diziler[i][j];
            }
       }
   }
          printf("\nDizinin en buyuk sayisi=%d\nEn kucuk sayisi=%d\n",buyuk_sayi,kucuk_sayi);
    return 0;
}
