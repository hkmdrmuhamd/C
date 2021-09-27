#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,mevcut,mevcut_ortalama,mevcut_toplam=0,sayilar[100][100];

    printf("Kac kisi giriceksiniz --> ");
    scanf("%d",&mevcut);

    for(i=0;i<mevcut;i++)
    {
        for(j=0;j<mevcut;j++)
        {
            printf("Bir deger giriniz:");
            scanf("%d",&sayilar[i][j]);
        }
    }
    printf("\n**********MEVCUT DEGERLER**********\n");
    for(i=0;i<mevcut;i++)
    {
        for(j=0;j<mevcut;j++)
        {
            printf("%d ",sayilar[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<mevcut;i++)
    {
        for(j=0;j<mevcut;j++)
        {
            mevcut_toplam=mevcut_toplam+sayilar[i][j];
        }
        printf("\n");
    }
   mevcut_ortalama=mevcut_toplam/(mevcut*mevcut);
   printf("Mevcut ortalama: %d ve mevcut toplam %d\n\n",mevcut_ortalama,mevcut_toplam);
    return 0;
}
