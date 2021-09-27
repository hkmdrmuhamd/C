#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ay;
    printf("Bir sayi giriniz: ");
    scanf("%d",&ay);
    switch (ay)
    {
      case 1: printf("Ocak"); break;
      case 2: printf("Subat");break;
      case 3: printf("Mart");break;
      case 4: printf("Nisan");break;
      case 5: printf("Mayis");break;
      case 6: printf("Haziran");break;
      case 7: printf("Temmuz");break;
      case 8: printf("Agustos");break;
      case 9: printf("Eylul");break;
      case 10:printf("Ekim");break;
      case 11:printf("Kasim");break;
      case 12:printf("Aralik");break;
      default:printf("Hatli bir deger girdiniz\n");
    }
    printf("\n");
      printf("***********************GIRILEN DERS KODUNA GORE DERSI VEREN PROGRAM***************************\n\n\n");

    char ders;
    printf("Ders kodu: ");
    scanf("%s",&ders);
    switch(ders)
    {
        case 't': printf("Turkce");break;
        case 'm': printf("Matematik");break;
        case 'f': printf("Fen");break;
        case 's': printf("Sosyal");break;
        default: printf("Hatali ders kodu ya da buyuk harf girisi");break;
    }
    return 0;
}
