#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,yildiz,bosluk,sayi;
    yildiz=1;
    printf("Bir boyut degeri giriniz:");
    scanf("%d",&sayi);
    bosluk=sayi-1;
    for(i=0;i<=sayi;i++)
    {
       for(j=0;j<=bosluk;j++)
       {
           printf(" ");
       }
       for (k=0;k<yildiz;k++)
       {
           if (k==0)
           printf("*");
           else
           {
                printf(" ");
           }
           if (k==yildiz-1)
            printf("*");
       }
       bosluk--;
       yildiz+=2;
       printf("\n");
    }
    bosluk=1;
    yildiz-=4;
    for(i=0;i<=sayi;i++)
    {
        for(j=0;j<bosluk;j++)
        {
            printf(" ");
        }
        for(k=0;k<yildiz;k++)
        {
            if (k==0)
            printf("*");
            else
                printf(" ");
            if (k==yildiz-1)
                printf("*");
        }
        yildiz-=2;
        bosluk++;
        printf("\n");
    }
    return 0;
}
