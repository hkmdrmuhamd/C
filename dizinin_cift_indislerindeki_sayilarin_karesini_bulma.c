#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,kareleri,sonuc=0,boyut,sayilar[]={4,8,5,7,11,9};
   boyut=sizeof(sayilar)/(sayilar[0]);
   for(i=0;i<boyut;i+=2)
   {
    printf("Dizinin cift indislerindeki sayilar:%d\n",sayilar[i]);
    kareleri=sayilar[i]*sayilar[i];
    sonuc=sonuc+kareleri;
   }
   printf("Sayilar dizisinin cift indislerindeki sayilarin karesi: %d",sonuc);
    return 0;
}
