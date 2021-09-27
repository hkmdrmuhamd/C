#include <stdio.h>
#include <stdlib.h>

typedef struct Ders
{
    char ad[20];
    int DKod;
    int vize,finaln;
    double ortalama;
    int durum;
}Ders;

typedef struct Ogrenci
{
    int ogrenci_no;
    char ad[20];
    int Dsayisi;
    Ders*Dersler;
}Ogr;

Ogr *ogr;

int ogrSay=0;

void bilgi_al(char ad[20],int Dsayisi)
{
    if (ogrSay==0)
   {
    ogr =(Ogr*)malloc(sizeof(Ogr));
   }
   else
  {
    ogr = (Ogr*)realloc(ogr,sizeof(Ogr)*(ogrSay+1));
  }
  strcpy((ogr+ogrSay)->ad,ad);
  (ogr+ogrSay)->Dsayisi=Dsayisi;
  (ogr+ogrSay)->Dersler=(Ders*)malloc(sizeof(Ders)*Dsayisi);
    printf("Ogrenci numarasi:");
    scanf("%d",&(ogr+ogrSay)->ogrenci_no);

  for (int i=0;i<Dsayisi;i++)
  {
      printf("%d. Dersin adi: ",i+1);
      scanf("%s",&((ogr+ogrSay)->Dersler+i)->ad);
      printf("%d. Dersin vize notu: ",i+1);
      scanf("%d",&((ogr+ogrSay)->Dersler+i)->vize);
      printf("%d. Dersin final notu: ",i+1);
      scanf("%d",&((ogr+ogrSay)->Dersler+i)->finaln);
      printf("Dersin ortalamasi: %d",((ogr+ogrSay)->Dersler+i)->ortalama);
      printf("\n");

  }

  ogrSay++;
}

void ort_hesapla()
{
    for (int i=0;i<ogrSay;i++)
    {
        for (int j=0;j<(ogr+i)->Dsayisi;j++)
        {
            (((ogr+i)->Dersler)+j)->ortalama=(((ogr+i)->Dersler)+j)->vize*0.4+(((ogr+i)->Dersler)+j)->finaln*0.6;
               if ((((ogr+i)->Dersler)+j)->ortalama>=60)
               {
                   (((ogr+i)->Dersler)+j)->durum = 1;
               }
               else
               {
                   (((ogr+i)->Dersler)+j)->durum = 0;
               }
        }

    }
}
void dersi_gecen_Ogrsayisi()
{

}


int main()
{
    int karar;
    int dongu =1;
    while (dongu)
    {
        printf("[1] - bilgi_al ve ortalama hesapla\n");
        printf("[2] - dersi_gecen_Ogrsayisi\n");
        printf("[0] - cikis\n");
        scanf("%d",&karar);
        char ad[20];
        int dersSay;
        int ogrenci;
        switch(karar)
        {
            case 1: printf("Eklemek istediginiz ogrenci ismi: ");
            scanf("%s",&ad);
            printf("%s adli ogrencinin kac dersi var: ",ad);
            scanf("%d",&dersSay);
            bilgi_al(ad,dersSay);
            ort_hesapla();
            break;
             case 2: printf("dersi_gecen_Ogrsayisi\n");
                     scanf("%d",ogrenci);
                     dersi_gecen_Ogrsayisi(ogrenci);
                     break;
             default:
                break;
        }

    }
    return 0;
}
