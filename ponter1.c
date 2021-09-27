#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi=5;
    int *p1;
    p1=&sayi;
    int sayi1=*p1;
    printf("sayi=%d\nsayi1=%d\n",sayi,sayi1);
    printf("p1'deki adres=%d\n",p1);
    printf("sayinin adresi=%d\n",&sayi);

    printf("------------------------------------------------\n");

    int sayi3=10;
    char karakter='A';
    float ondalik=5.4;

    int *p_sayi, *p_karakter, *p_ondalik;

    p_sayi=&sayi3;
    p_karakter=&karakter;
    p_ondalik=&ondalik;

    printf("sayinin adresi -->%d\nkarakterin adresi -->%d\nondaligin adresi -->%d\n",p_sayi,p_karakter,p_ondalik);

    printf("-------------------------------------------------------------------------------------\n");

    int deger1=5;
    int deger2=10;
    int *po1, *po2;
    int temp1,temp2;

    printf("deger1= %d ve deger2= %d\n",deger1,deger2);
    po1=&deger1;
    printf("adres 1= %d\n",po1);

    po2=&deger2;
    printf("adres 2= %d\n",po2);

    po1=&deger2;
    po2=&deger1;

    printf("deger 1= %d ve deger 2= %d\n",*po1,*po2);
    return 0;
}
