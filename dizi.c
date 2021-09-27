#include <stdio.h>
#include <stdlib.h>

int main()
{
  int sayi,i,boyut,indis=0;
   int dizi[]={8, 5, 2, 3, 7, 11};
    boyut=sizeof(dizi)/sizeof(dizi[0]);
    for (i=1;i<=boyut;i++)
    {
     printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    while (indis>=0)
    {
        if (sayi==dizi[indis])
     {
      printf("Girdiginiz sayi dizide yer almaktadir= %d\n");
     }
     else
     {
         printf("Girdiginiz sayi dizide yer almamaktadir tekrar deneyiniz.\n");
      continue;
     }
    }
    }

    return 0;
}
