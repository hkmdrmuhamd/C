#include <stdio.h>
#include <stdlib.h>

int main()
{
    char metin[30],aranan[15];
    int uzunluk_metin=0,uzunluk_aranan=0,i,j,sayac,toplam_sayac=0;

    printf("Bir metin giriniz:");
    scanf("%s",&metin);

    printf("Metinde aramak istediginiz kelimeyi giriniz:");
    scanf("%s",&aranan);

    for(i=0;metin[i]!='\0';i++)
    {
        uzunluk_metin++;
    }
    for (i=0;aranan[i]!='\0';i++)
    {
        uzunluk_aranan++;
    }
    for(i=0;i<uzunluk_metin-uzunluk_aranan;i++)
    {
        j=0;
        sayac=0;
        if(metin[i]==aranan[j])
        {
            sayac++;
           for(j=1;j<uzunluk_aranan;j++)
           {
               if(metin[i+j]==aranan[j])
               {
                   sayac++;
               }
           }
        }
        if(sayac==uzunluk_aranan)
            toplam_sayac++;
    }
    printf("<% s > metni icinde < %s > ifadesi < %d > kez gecmektedir.\n",metin,aranan,toplam_sayac);
    return 0;
}
