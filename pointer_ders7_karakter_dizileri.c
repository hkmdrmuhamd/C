#include <stdio.h>
#include <stdlib.h>

int main()
{
    char isim[]="Muhammed Hukumdar";
    char *p;
    int boyut=sizeof(isim)/sizeof(isim[0]);

    for (int i=0;i<boyut;i++)
    {
    p=&isim[i];
    printf("%c",*p);
    }
    printf("\n");

    char *sehir="Malatya";   //Bu islemin aynisi while ile de yapilabilir.
    printf("%s\n",sehir);
    for (int i=0;i<7;i++)
    {
        printf("%c , %x\n",*(sehir+i),sehir+i);
    }
    printf("\n\n");

     char *sehir2="Eskisehir";
    while(*sehir2 != '\0')
    {
    printf("%c , %x\n",*sehir2,sehir2);
    sehir2++;
    }


    return 0;
}
