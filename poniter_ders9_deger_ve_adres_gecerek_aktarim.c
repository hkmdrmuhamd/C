#include <stdio.h>
#include <stdlib.h>

void f1(int n)   //Deger gecerek aktarim
{
    n=66;
    printf("f1 fonksiyonu icinde: %d\n",n);
}
void f2(int *n)  //Adres gecerek aktarim
{
    *n=77;
    printf("f2 fonksiyonu icinde: %d\n",*n);
}

int main()
{
    int x=55;
    printf("Fonksiyonun cagirilmadan onceki degeri= %d\n",x);

    //f1 fonksiyonu cagiriliyor.
    f1(x);
    printf("x'in degeri: %d\n",x);

    //f2 fonksiyoni cagiriliyor.
    f2(&x);
    printf("x'in degeri: %d\n",x);
    return 0;
}
