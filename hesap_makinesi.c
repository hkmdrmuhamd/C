#include <stdio.h>
#include <stdlib.h>

int main()
{
   float sayi1,sayi2;
   char islem;
   printf("Ilk sayiyi giriniz:");
   scanf("%f",&sayi1);
   printf("Islemi giriniz:");
   scanf("%s",&islem);
   printf("Ikinci sayiyi giriniz:");
   scanf("%f",&sayi2);
   switch(islem)
   {
       case '+':printf("%0.2f",sayi1+sayi2);
       break;
       case '-':printf("%0.2f",sayi1-sayi2);
       break;
       case '/':printf("%0.2f",sayi1/sayi2);
       break;
       case '*':printf("%0.2f",sayi1*sayi2);
       default:
        break;
   }
    return 0;
}
