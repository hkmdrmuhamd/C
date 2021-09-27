#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[10] = {9,1,8,2,7,3,6,4,10,5};
    int boyut=sizeof(dizi)/sizeof(dizi[0]);
    int i,sayi,toplam=0,ortalama;

    for(i=0; i<boyut; i++)
    {
        toplam=toplam+dizi[i];
        ortalama=toplam/sayi;
    }
    printf("Dizinin elemanlari ortalamasi:%d\n",ortalama);
    return 0;
}
