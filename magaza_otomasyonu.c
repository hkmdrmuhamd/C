#include <stdio.h>
#include <stdlib.h>

int musteriler[100][4]={{101,2018,90,1},{112,2017,230,3},{107,2020,150,4},{257,2015,300,5}};

  int musteri_bilgileri(int musteri_no)
  {
      int i,boyut=sizeof(musteriler)/sizeof(musteriler[0]);
      for (i=0;i<musteriler;i++)
      {
          if (musteri_no==musteriler[i][0])
          {
              return i;
          }
          else if (i==boyut-1)
          return -1;
      }
  }
 float iade_miktar(int musteri_indis)
 {
     float ucret=0;
     switch(musteriler[musteri_indis][3])
     {
    case 0:
        ucret=0;
        break;
     case 1:
        ucret=0;
        break;
     case 2:
        ucret=0;
        break;
    case 3:
    ucret=(musteriler[musteri_indis][2]*30)/100;
    break;
    case 4:
         ucret=(musteriler[musteri_indis][2]*40)/100;
         break;
    case 5:
         ucret=(musteriler[musteri_indis][2]*50)/100;
         break;
    default:
        break;
     }
 printf("\nGeri odenecek tutar: %0.2f",ucret);

 }
int main()
{
   int musteri_no,musteri_indis,ucret;

   printf("Incelemek istediginiz musterinin id nosunu giriniz: ");
   scanf("%d",&musteri_no);

   musteri_indis=musteri_bilgileri(musteri_no);
   if (musteri_indis==-1)
   {
       printf("\nMusteri bulunamadi.\n");
       return 0;
   }
   ucret=iade_miktar(musteri_indis);

   printf("\nMusteri ID numarasi: %d\nMagazaya en son geldigi yil: %d\nYaptigi harcama %d\n",musteriler[musteri_indis][0],musteriler[musteri_indis][1],musteriler[musteri_indis][2],musteriler[musteri_indis][3]);

}
