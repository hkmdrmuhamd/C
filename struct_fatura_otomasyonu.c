#include <stdio.h>
#include <stdlib.h>

typedef struct Faturalar
{
    int faturaTipi;
    int borc;
    int fNo;
    char isim[20];
}FT;

typedef struct Aboneler
{
    int aID;
    char isim[20];
    int topBorc;
    int fSayisi;
    FT *faturalar;
}AB;
AB *aboneler;
void abone_ekleme(int aSayisi);

void borc_hesaplama(AB* aboneler, int abSayisi);
void abone_listeleme(AB* aboneler, int aSayisi);

int main()
{
    int abone_sayisi;

    printf("Kac adet abone bilgisini tutmak istiyorsunuz: ");
    scanf("%d",&abone_sayisi);

        abone_ekleme(abone_sayisi);
        borc_hesaplama(aboneler,abone_sayisi);
        abone_listeleme(aboneler,abone_sayisi);


    return 0;
}

void abone_ekleme(int aSayisi)
{
    int i, j, fSayisi;

    AB *aboneler = (AB*)malloc(sizeof(AB)*aSayisi);

    for (i=0;i<aSayisi;i++)
    {
        printf("%d. abone no: ",i+1);
        scanf("%d",&(aboneler+i)-> aID);

        printf("%d. abone adi: ",i+1);
        scanf("%s",(aboneler+i)-> isim);

        printf("%d. abone fatura sayisi: ",i+1);
        scanf("%d",&fSayisi);

        (aboneler+i)->fSayisi=fSayisi;
        (aboneler+i)->faturalar =(FT*)malloc(sizeof(FT)*fSayisi);

        for (j=0;j<fSayisi;j++)
        {
            printf("%d. abonenin %d. fatura tipi: ",i+1,j+1);
            scanf("%d",&((aboneler+i)->faturalar+j)->faturaTipi);

            printf("%d. abonenin %d. fatura borcu: ",i+1,j+1);
            scanf("%d",&((aboneler+i)->faturalar+j)->borc);

            printf("%d. abonenin %d. fatura abone no: ",i+1,j+1);
            scanf("%d",&((aboneler+i)->faturalar+j)->fNo);

        }
    }
}

void borc_hesaplama(AB* aboneler, int abSayisi)
{
    int i,j;
    int fSayisi,toplamBorc;

    for (i=0;i<abSayisi;i++)
    {
        fSayisi = (aboneler+i)->fSayisi;
        toplamBorc=0;

        for (j=0;j<fSayisi;j++)
        {
            toplamBorc += ((aboneler+i)->faturalar+j)->borc;
        }
        (aboneler+i)->topBorc = toplamBorc;
    }
    printf("Abone borcu: %d\n",toplamBorc);
}

void abone_listeleme(AB* aboneler, int aSayisi)
{
    int i,j,fSayisi;
    int aranacak_abone;

    printf("Aranacak abonenin numarasini giriniz: ");
    scanf("%d",&aranacak_abone);

    for (i=0;i<aSayisi;i++)
    {
        if ((aboneler+i)->aID == aranacak_abone)
        {
            fSayisi = (aboneler+i)->fSayisi;

            for (j=0;j<fSayisi;j++)
            {
                printf("Fatura tipi: %d  Fatura borcu: %d  Abone adi: %s\n",((aboneler+i)->faturalar+j)->faturaTipi,((aboneler+i)->faturalar+j)->borc,(aboneler+i)-> isim);
            }
            printf("Toplam Borc: %d\n",(aboneler+i)->topBorc);
        }
    }
}
