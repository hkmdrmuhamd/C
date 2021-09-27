#include <stdio.h>
#include <stdlib.h>

int Hasta_veri[100][5]={{101,0,4,1,3},{112,2,1,0,2},{107,4,3,0,0},{257,1,0,0,2},{158,3,4,1,0}};

int Hasta_indis_bul(int hasta_id)
    {
        int boyut=sizeof(Hasta_veri)/sizeof(Hasta_veri[0]);
        int i;
        for (i=0;i<boyut;i++)
        {
            if (hasta_id==Hasta_veri[i][0])
            {
                return i;
            }
            else if(i==boyut-1)

                return -1;

        }
    }
float Muayene_ucret_hesapla(int hasta_bilgileri)
{
    float ucret=0;
    if (Hasta_veri[hasta_bilgileri][3]==1)
    {
        ucret=150;
    }
    else
        ucret=50;

    switch(Hasta_veri[hasta_bilgileri][1])
    {
    case 0:
        ucret*=2;
        break;
    case 1:
        ucret-=(ucret*20)/100+(ucret*30)/100;
        break;
    case 2:
        ucret=0;
        break;
    case 3:
        ucret-=(ucret*10)/100+(ucret*30)/100;
        break;
    case 4:
        ucret=0;
        break;
    default:
        break;
    }
    if (ucret>=10 && Hasta_veri[hasta_bilgileri][2]>=3)
        ucret-=10;
    return ucret;

}
int Engelli_Hasta_sayisi(int hasta_bilgileri)
{
    int engel_durumu;
    switch(Hasta_veri[hasta_bilgileri][4])
    {
        case 0:
            engel_durumu=0;
        break;
        case 1:
            engel_durumu=1;
        break;
        case 2:
            engel_durumu=2;
        break;
        case 3:
            engel_durumu=3;
        break;
        default:
            break;
    }
    return engel_durumu;
}

int main()
{
    int hasta_id,hasta_bilgileri;
    int engel_durumu;
    float ucret;
    printf("Hangi hastanin bilgilerini kontrol etmek istiyorsunuz -->");
    scanf("%d",&hasta_id);
    printf("\n");
    hasta_bilgileri=Hasta_indis_bul(hasta_id);

    if (hasta_bilgileri==-1)
    {
        printf("Girilen kimlik numarasinda'de hasta bulunamadi.");
        return 0;
    }
    ucret= Muayene_ucret_hesapla(hasta_bilgileri);
    engel_durumu=Engelli_Hasta_sayisi(hasta_bilgileri);
    printf("Hasta kimlik numarasi --> %d\nSaglik guvencesi --> %d\nKardes sayisi --> %d\nMuayene durumu --> %d\nUcret --> %0.2f\n",Hasta_veri[hasta_bilgileri][0],Hasta_veri[hasta_bilgileri][1],Hasta_veri[hasta_bilgileri][2],Hasta_veri[hasta_bilgileri][3],ucret);
    printf("Engel Durumu --> %d\n",engel_durumu);
}
