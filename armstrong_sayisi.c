#include <stdio.h>
#include <stdlib.h>

int armstrong_sayisi(int sayi)
{
    int birler,onlar,yuzler,sayi_ilk=sayi;
    yuzler=sayi/100;
    sayi-=yuzler*100;

    onlar=sayi/10;
    sayi-=onlar*10;

    birler=sayi;

    if (sayi_ilk==(birler*birler*birler)+(onlar*onlar*onlar)+(yuzler*yuzler*yuzler))
    {
      printf("Girdginiz sayi bir armstrong sayisidir.\n");
    }
    else
        printf("Girdiginiz sayi bir armstrong sayisi degirdir.\n");

    return 0;
}
int main()
{
 int deger;

     printf("Uc basamakli bir sayi degeri giriniz --> ");
     scanf("%d",&deger);
     armstrong_sayisi(deger);

    return 0;
}
