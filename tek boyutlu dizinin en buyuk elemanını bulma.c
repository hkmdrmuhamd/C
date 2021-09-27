#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,boyut,sayilar[]={7,8,5,11,2,6};
    int mak_indis=0,mak=sayilar[0];
    boyut=sizeof(sayilar)/sizeof(sayilar[0]);
    for(i=0;i<boyut;i++)
    {
        if(mak<sayilar[i])
        {
           mak=sayilar[i];
           mak_indis=i;
        }
    }
           printf("Sayilar dizisindeki en buyuk sayi=%d ve o sayinin indisi=%d\n",mak,mak_indis);
    return 0;
}
