
                                                 //Muhammed Hukumdar - 20010011067

#include <stdio.h>
#include <stdlib.h>
#include <string.h>  //strcpy komutunu kullanmak icin gerekli kutuphane belirlendi.
#include <conio.h>  //getch komutunu kullanmak icin gerekli kutuphane belirlendi.


typedef struct KULUP    //otomasyon boyunca kullanilacak olan KULUP struct yapisi tanimlanmis ve gerekli degiskenler belirlenmistir.
{
    int gol_dk;

} klup;

typedef struct Futbolcular   //Bir diger struct olan Futbolcular yapisi icinde futbolcu isimleri, gol sayisi, forma numarasi ve
                            //p_gol_sayisi adinda bir pointer belirlenmistir.
{
    char isim[20];
    int gol_sayisi;
    int forma_no;
    klup *p_gol_sayisi;
} fut;

fut *futbolcu;        //Futbolcular struct'ini rahat bir sekilde kullanabilmek icin futbolcu adinda bir pointer atadik.
int futbolcuSayisi=0;

void futbolcu_ekle(char isim[20],int golSayisi)
{
    if (futbolcuSayisi==0)  //Bu kontrolun amaci daha once hicbir futbolcu girilmediyse malloc ile gerekli yeri acar.

        futbolcu=(fut*)malloc(sizeof(fut));
    else
    {
        futbolcu=(fut*)realloc(futbolcu,sizeof(fut)*(futbolcuSayisi+1)); //eger daha once futbolcu kaydi yapilmissa
                                                                        //realloc ile bellegi yeniden konumlandirir ve yer acar.
    }
    strcpy((futbolcu+futbolcuSayisi)->isim,isim); //strcpy ile futbolcu pointerine futbolcu sayisini ekleyerek isim degiskenine kopyalama islemi yapilir.
    (futbolcu+futbolcuSayisi)->gol_sayisi=golSayisi;

    (futbolcu+futbolcuSayisi)->p_gol_sayisi=(klup*)malloc(sizeof(klup)*golSayisi); //Bu islem ile gerekli alan malloc sayesinde belirlenir.

    printf("Futbolcunun forma numarasi kactir? =>");
    scanf("%d",&(futbolcu+futbolcuSayisi)->forma_no);

    for(int i=0; i<golSayisi; i++)
    {
        printf("%d.Golun atildigi dakika:",i+1);
        scanf("%d",&((futbolcu+futbolcuSayisi)->p_gol_sayisi+i)->gol_dk);  //((futbolcu+futbolcuSayisi)->p_gol_sayisi+i)->gol_dk yapisi ile struct'daki gol dakikasina yeni ekleme yapilir.
        printf("\n");
    }

    futbolcuSayisi++;
}
void kayitli_futbolculari_listeleme()
{
    for(int i=0; i<futbolcuSayisi; i++) //i degiskeni, futbolcu sayisindan kucuk oldugu surece dongu devam eder.
    {
        printf("\n%d.Futbolcunun ismi:%s \n",i+1,(futbolcu+i)->isim);
        printf("%d.Futbolcunun forma numarasi:%d \n",i+1,(futbolcu+i)->forma_no);
        printf("%d.Futbolcunun gol sayisi:%d \n",i+1,(futbolcu+i)->gol_sayisi);
        printf("\n");
        for(int j=0; j<(futbolcu+i)->gol_sayisi; j++)    //ne kadar futbolcu varsa o futbolcularin gol sayisinin bulundugu yere gidip dongunun o kadar donmesi saglar.
        {
            printf("%d.Golun atildigi dakika:%d \n",j+1,((futbolcu+i)->p_gol_sayisi+j)->gol_dk);
            printf("\n");
        }
    }
}
void futbolcu_kayit_silme(int ft)
{
    if(ft<=0||ft>futbolcuSayisi) //aradigimiz deger sifirdan kucuk ve toplam futbolcu sayisindan buyukse futbolcu bulunamadi hatasi verir.
    {
        printf("Futbolcu bulunamadi!!\n\n");
    }
    else
    {

        for(int i=ft; i<futbolcuSayisi; i++)
        {
            *(futbolcu+(i-1))=*(futbolcu+i); //buradaki islemde silmek istedigimiz futbolcu icin *(futbolcu+(i-1))=*(futbolcu+i) islemi kullanilir.
                                      // i den -1 cikarilmasinin sebebi silinen futbolcu yerine diger futbolcularin kayma islemini gerceklestirebilmektir.
        }
        futbolcuSayisi--;
        futbolcu=(fut*)realloc(futbolcu,sizeof(fut)*futbolcuSayisi); //silinen futbolcudan sonra ornegin boyut degerimiz 4 ise bir futbolcu silinmesine ragmen
                                                                    //hala 4 futbolcu kalmamasi icin realloc ile tekrar yeni bellek tahsis edilir.
    }
}
void futbolcu_arama(char isim[20])               //bu fonksiyon i ile futbolcular arasinda tek tek gezip gol sayilarinda da tek tek j ile gezip
                                                //aradigimiz futbolcuyu bulmamizi saglar.
{

    for(int i=0; i<futbolcuSayisi; i++)
    {
        if(strcmp((futbolcu+i)->isim,isim) == 0)
        {
            printf("\n++++++++++Futbolcu Bilgileri++++++++++\n\n");
            printf("Gol sayisi: %d\n\n",(futbolcu+i)->gol_sayisi);
            printf("Forma numarasi: %d\n\n",(futbolcu+i)->forma_no);
            for(int j=0; j<(futbolcu+i)->gol_sayisi; j++)
            {
                printf("%d.Golun atildigi dakika:%d\n\n",j+1,((futbolcu+i)->p_gol_sayisi+j)->gol_dk);
                printf("\n");
            }

        }
        else
            printf("Futbolcu bulunamadi.(Eksik deger girmis olabilirsiniz!!)\n\n");
    }

}
void gol_dk_guncelleme(int ft)
{
    if(ft<=0||ft>futbolcuSayisi)       //silme fonksiyonunda oldugu gibi futbolcunun olup olmadigini kontrol ederiz.
    {
        printf("Futbolcu bulunamadi!!\n\n");
    }
    else
    {
        printf("\nGuncellemek istediginiz futbolcunun attigi goller:\n");
        for(int i=0; i<(futbolcu+(ft-1))->gol_sayisi; i++)        //futbolcu bulununca bu futbolcunun bilgilerinin oldugu Futbolcular struct'ina gidilir
                                                                 //ve oradaki bilgiler ekrana yazilir.
        {
            printf("%d.Golun atildigi dk:%d\n",i+1,(((futbolcu+(ft-1))->p_gol_sayisi)+i)->gol_dk);
            printf("\n");
        }
        printf("Kacinci golun atildigi dk'yi guncellemek istiyorsunuz? =>");
        int gol;
        scanf("%d",&gol);                                      //ekrana yazilan bigilerden secim yapilarak istenilen gol dakikasinda degisiklik yapilabilir.

        if(gol <= 0 || gol > (futbolcu+(ft-1))->gol_sayisi)
        {
            printf("Kayitlarda boyle bir gol yoktur!\n\n");
        }
        else
        {
            printf("%d.Golun atildigi dk:",gol);
            scanf("%d",&(((futbolcu+(ft-1))->p_gol_sayisi)+(gol-1))->gol_dk);
        }
    }
}
void forma_no_guncelleme(int f_no)
{
    if(f_no<=0||f_no>futbolcuSayisi)
    {
        printf("Futbolcu bulunamadi!!\n\n");
    }
    else
    {
        printf("Yeni forma numarasini giriniz:");
        scanf("%d",&(futbolcu+(f_no-1))->forma_no);
    }
}

int main()
{
    int tus;           //menu ve switch-case yapisi icin gerekli atamalar yapildi.
    int menu=1;
    while(menu)      //while ile sonsuz dongu olusturuldu. 0 girilirse dongu 0 oldugu icin sonsuz donguden cikilir ve bu sayede otomasyon kapatilir.
    {
        printf("--------------------FUTBOLCU BILGILERI OTOMASYONU--------------------\n\n");  //otomasyon menusu
        printf("[1] - Futbolcu Ekleme\n");
        printf("[2] - Kayitlari listeleme\n");
        printf("[3] - Futbolcu Arama\n");
        printf("[4] - Gol dakikasi guncelleme\n");
        printf("[5] - Forma no guncelleme:\n");
        printf("[6] - Kayit silme\n");
        printf("[0] - Cikis\n");
        printf("\n\n------------------------------------------------------------------------\n\n");

        printf("Yapmak istediginiz islemi seciniz => ");
        scanf("%d",&tus);
        char ad[20];  //menude kullanilacak ve fonksiyonlara gonderilecek degiskenler atandi.
        int golSayisi;
        int futbolcu;
        int futbol;
        int kisi_sayisi;
        switch(tus)
        {
        case 1:
            printf("Kac futbolcuyu sisteme kayit edeceksiniz? =>");
            scanf("%d",&kisi_sayisi);
            for (int i=0; i<kisi_sayisi; i++)
            {
                printf("Futbolcunun ismi nedir? (Iki ismi olanlarda arada _ isareti olacak sekilde giris yapiniz!) =>");
                scanf("%s",ad);
                printf("%s adli futbolcunun kac golu var? =>",ad);
                scanf("%d",&golSayisi);
                futbolcu_ekle(ad,golSayisi);       //fonksiyonlardaki degiskenlere degerler gonderir.
            }
            break;
        case 2:
            kayitli_futbolculari_listeleme();
            break;
        case 3:
            printf("Aradiginiz futbolcunun ismi nedir? (Iki ismi olanlarda arada _ isareti olacak sekilde giris yapiniz!) =>");
            scanf("%s",ad);
            futbolcu_arama(ad);
            break;
        case 4:
            printf("Kacinci futbolcunun attigi golun dakikasini guncellemek istiyorsunuz?(Isim degil deger giriniz) =>");
            scanf("%d",&futbolcu);
            gol_dk_guncelleme(futbolcu);
            break;
        case 5:
            printf("Kacinci futbolcunun forma numarasini degistirmek istiyorsunuz?(Isim degil deger giriniz) =>");
            scanf("%d",&futbol);
            forma_no_guncelleme(futbol);
            break;
        case 6:
            printf("Kacinci futbolcunun kaydini silmek istiyorsunuz? (Isim degil deger giriniz!) =>");
            scanf("%d",&futbolcu);
            futbolcu_kayit_silme(futbolcu);
            break;
        case 0:
            menu=0;
            break;
        default:
            printf("Yanlis secim! Lutfen menudeki degerlerden birini giriniz.\n");   //menudeki islemlerden biri tuslanmazsa hatali secim uyarisi verir.
        }
        printf("Ana menuye donmek icin bir tusa basiniz:");
        getch();             //yapilan islemlerden sonra menuye donmek icin kullanicinin girecegi deger getch ile tutulur.
        system("cls");       //yapilan secimlerden sonra ekrani temizler ve daha güzel bir menu goruntusu olusturur.
    }

    return 0;
}
