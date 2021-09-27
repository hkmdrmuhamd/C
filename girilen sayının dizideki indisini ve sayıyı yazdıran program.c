#include <stdio.h>
#include <stdlib.h>

int main()
{
  int sayilar[]={5,8,3,44,2};
  int i,boyut,aranan_sayi,aranan_sayi_indisi=-1;
  boyut=sizeof(sayilar)/sizeof(sayilar[0]);
  printf("Dizinin icinde aramak istediginiz sayiyi giriniz:");
  scanf("%d",&aranan_sayi);
  for(i=0;i<boyut;i++)
  {
      if (aranan_sayi==sayilar[i])
      {
       aranan_sayi_indisi=i;
       break;
      }
  }
  if (aranan_sayi_indisi != -1)
  {
      printf("Girdiginiz sayi dizinin %d. indisinde ve %d sayisidir",aranan_sayi_indisi,aranan_sayi);
  }
  else
  {
      printf("Girdiginiz sayi dizide yer almamaktadir.");
  }
  return 0;
}
