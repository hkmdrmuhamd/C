#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int sayi)
{
    int carpim=1;
    for(;sayi>0;sayi--)
    {
        carpim=carpim*sayi;
    }
    return carpim;
}
int main()
{
   int deger;
   printf("Faktoriyelini hesaplamak istediginiz sayiyi giriniz--> ");
   scanf("%d",&deger);
   printf("%d",faktoriyel(deger));

    return 0;
}
