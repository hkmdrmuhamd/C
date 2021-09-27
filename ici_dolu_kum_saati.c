#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,boyut,yildiz,bosluk;
    printf("Bir deger giriniz: ");
    scanf("%d",&boyut);
   yildiz=boyut*2-1;
   bosluk=0;

    for (i=0;i<boyut;i++)
    {
      for (j=0;j<bosluk;j++)
      {
          printf(" ");
      }
         for (j=0;j<yildiz;j++)
         {
             printf("*");
         }
         printf("\n");
         bosluk++;
         yildiz-=2;
    }
    yildiz=yildiz+2;
    bosluk=7;
    for (i=0;i<boyut;i++)
    {
        for (j=0;j<bosluk;j++)
        {
            printf(" ");
        }
        for (j=0;j<yildiz;j++)
        {
            printf("*");
        }
        printf("\n");
        yildiz+=2;
        bosluk--;
    }

    return 0;
}
