#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("**********DIZININ SUTUN DEGERLERINI TOPLAYAN PROGRAM**********\n\n");

   int diziler[3][5];
   int i,j,sutun=1;
   int boyut=sizeof(diziler)/sizeof(diziler[0]);
   int temp=0;

   for (i=0;i<boyut;i++)
   {
       for (j=0;j<boyut+2;j++)
       {
           printf("Bir deger giriniz:");
           scanf("%d",&diziler[i][j]);
       }
   }
   printf("\n");
    for (i=0;i<boyut;i++)
   {
       for (j=0;j<boyut+2;j++)
       {
           printf("%d ",diziler[i][j]);
       }
       printf("\n");
   }
   printf("\n");
   for(j=0;j<boyut+2;j++)
   {
       for (i=0;i<boyut;i++)
       {
           temp=temp+diziler[i][j];
       }
       printf("Sutun degeri toplami:%d\n",temp);
       temp=0;
   }
    return 0;
}
