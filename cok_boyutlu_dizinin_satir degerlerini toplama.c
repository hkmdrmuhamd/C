#include <stdio.h>
#include <stdlib.h>

int main()
{

      printf("******KULLANICIDAN ALINAN SAYI DEGERLERINI DIZIYE AKTARIP BU DIZININ SATIRLARINDAKI DEGERLERI TOPLAYAN PROGRAM******\n\n");

    int diziler[3][3];
    int i,j,temp=0;
    int degisken=0;
    int gecici=0;
    int boyut=sizeof(diziler)/sizeof(diziler[0]);

    for (i=0;i<boyut;i++)
    {
        for (j=0;j<boyut;j++)
        {
            printf("Diziye atamak icin bir sayi giriniz:");
            scanf("%d",&diziler[i][j]);
        }
    }
    printf("\n");
    for (i=0;i<boyut;i++)
    {
        for (j=0;j<boyut;j++)
        {
            printf("%d ",diziler[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i=0;i<boyut;i++)
    {
        for (j=0;j<boyut;j++)
        {
            if (i==0 && j==0|| i==0 && j==1||i==0 && j==2)
            {
                 temp=temp+diziler[i][j];
            }
        }
    }
    printf("1.satir toplami=%d\n",temp);
    for (i=0;i<boyut;i++)
    {
        for (j=0;j<boyut;j++)
        {
            if (i==1 && j==0 ||i==1 &&j==1 || i==1 && j==2)
            {
                 degisken=degisken+diziler[i][j];
            }
        }
    }
    printf("2.satir toplami=%d\n",degisken);
     for (i=0;i<boyut;i++)
    {
        for (j=0;j<boyut;j++)
        {
             if (i==2 && j==0 || i==2 && j==1 || i==2 && j==2)
            {
                 gecici=gecici+diziler[i][j];
            }
        }
    }
    printf("3.satir toplami=%d\n",gecici);
    return 0;
}
