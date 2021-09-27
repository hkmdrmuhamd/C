#include<stdio.h>
#include<stdlib.h>
#include<string.h>
                                               //Muhammed Hukumdar - 20010011067

typedef struct Dersler       //otomasyon boyunca kullanilacak olan Dersler struct yapisi tanimlanmis ve gerekli degiskenler belirlenmistir.
{
    char isim[20];
    int vize;
    int finall;
    int gecme_Notu;
} Ders;
typedef struct Ogrenciler   //Bir diger struct olan Ogrenciler yapisi icinde ogrenci isimleri, ders sayisi ve diger fonksiyonlarda kullanilmasi icin
                           //dersler adinda bir pointer belirlenmistir.
{
    char isim[20];
    int ders_sayisi;
    Ders* p_dersler;
} Ogr;

Ogr* ogrenci;             //Ogrenciler struct'ini rahat bir sekilde kullanabilmek icin ogrenci adinda bir pointer atadik.
int ogrenciSayisi=0;

void ogrenci_ekle(char isim[20],int dersSayisi)
{
    if(ogrenciSayisi==0) //Bu kontrolun amaci daha once hicbir ogrenci girilmediyse malloc ile gerekli yeri acar.

        ogrenci=(Ogr*)malloc(sizeof(Ogr));

    else
    {
        ogrenci=(Ogr*)realloc(ogrenci,sizeof(Ogr)*(ogrenciSayisi+1));//eger daha once ogrenci kaydi yapilmissa
                                                                    //realloc ile bellegi yeniden konumlandirir ve yer acar.
    }
    strcpy((ogrenci+ogrenciSayisi)->isim,isim);         //strcpy ile ogrenci pointerine ogrenci sayisini ekleyerek isim degiskenine kopyalama islemi yapilir.
    (ogrenci+ogrenciSayisi)->ders_sayisi=dersSayisi;

    (ogrenci+ogrenciSayisi)->p_dersler=(Ders*)malloc(sizeof(Ders)*dersSayisi); //Bu islem ile gerekli alan malloc sayesinde belirlenir.

    for(int i=0; i<dersSayisi; i++)
    {
        printf("%d.Dersin Adi (Iki ismi olan derslerde arada _ isareti olacak sekilde giris yapiniz!):",i+1);
        scanf("%s",((ogrenci+ogrenciSayisi)->p_dersler+i)->isim);   //((ogrenci+ogrenciSayisi)->dersler+i)->isim yapisi ile struct'daki ders ismine yeni ekleme yapilir.
        printf("%d.Dersin Vize Notu:",i+1);
        scanf("%d",&((ogrenci+ogrenciSayisi)->p_dersler+i)->vize);
        printf("%d.Dersin Final Notu:",i+1);
        scanf("%d",&((ogrenci+ogrenciSayisi)->p_dersler+i)->finall);
        printf("\n");
    }

    ogrenciSayisi++;
}
void kayitli_ogrencileri_listeleme()
{
    for(int i=0; i<ogrenciSayisi; i++) //i degiskeni, ogrenci sayisindan kucuk oldugu surece dongu devam eder.
    {
        printf("\n%d.Ogrencinin ismi:%s \n",i+1,(ogrenci+i)->isim);
        printf("%d.Ogrencinin ders sayisi:%d \n",i+1,(ogrenci+i)->ders_sayisi);
        printf("\n");
        for(int j=0; j<(ogrenci+i)->ders_sayisi; j++)    //ne kadar ogrenci varsa o ogrencilerin ders sayisinin bulundugu yere gidip dongunun o kadar donmesi saglar.
        {
            printf("Dersin adi:%s \n",((ogrenci+i)->p_dersler+j)->isim);  //((ogrenci+i)->dersler+j)->isim ogrencinin derslerini bulup ordan da
                                                                    //derslerin isimlerine gitmemizi saglar.
            printf("Dersin vize notu:%d \n",((ogrenci+i)->p_dersler+j)->vize);
            printf("Dersin final notu:%d \n",((ogrenci+i)->p_dersler+j)->finall);
            printf("Dersin ortalamasi:%d \n",((ogrenci+i)->p_dersler+j)->gecme_Notu);
            printf("\n");
        }
    }
}
void kayit_silme(int ogr)
{
    if(ogr<=0||ogr>ogrenciSayisi) //aradigimiz deger sifirdan kucuk ve toplam ogrenci sayisindan buyukse ogrenci bulunamadi hatasi verir.
    {
        printf("Ogrenci bulunamadi!!\n\n");
    }
    else
    {

        for(int i=ogr;i<ogrenciSayisi;i++)
        {
            *(ogrenci+(i-1))=*(ogrenci+i); //buradaki islemde silmek istedigimiz ogrenci icin *(ogrenci+(i-1))=*(ogrenci+i) islemi kullanilir.
                                          // i den -1 cikarilmasinin sebebi silinen ogrenci yerine diger ogrencilerin kayma islemini gerceklestirebilmektir.
        }
        ogrenciSayisi--;
        ogrenci=(Ogr*)realloc(ogrenci,sizeof(Ogr)*ogrenciSayisi); //silinen ogrenciden sonra ornegin boyut degerimiz 4 ise bir ogrenci silinmesine ragmen
                                                          //hala 4 ogrenci kalmamasi icin realloc ile tekrar yeni bellek tahsis edilir.
    }
}
void ogrenci_arama(char isim[20])                       //bu fonksiyon i ile ogrenciler arasinda tek tek gezip derslerde de tek tek j ile gezip
                                                //aradigimiz ogrenciyi bulmamizi saglar.
{

    for(int i=0;i<ogrenciSayisi;i++)
    {
        if(!strcmp((ogrenci+i)->isim,isim))
        {
            printf("\nDers Bilgileri:\n");

            for(int j=0;j<(ogrenci+i)->ders_sayisi;j++)
            {
                printf("%d.Dersin adi:%s\n",i+1,((ogrenci+i)->p_dersler+j)->isim);
                printf("%d.Dersin vize notu:%d\n",i+1,((ogrenci+i)->p_dersler+j)->vize);
                printf("%d.Dersin final notu:%d\n",i+1,((ogrenci+i)->p_dersler+j)->finall);
                printf("%d.Dersin ortalamasi:%d\n",i+1,((ogrenci+i)->p_dersler+j)->gecme_Notu);
                printf("\n");
            }

        }
    }

}
void not_guncelleme(int ogr)
{
     if(ogr<=0||ogr>ogrenciSayisi)       //silme fonksiyonunda oldugu gibi ogrencinin olup olmadigini kontrol ederiz.
        {
        printf("Ogrenci Bulunamadi!!\n\n");
        }
    else
    {
        printf("\nGuncellemek istediginiz ogrencinin dersleri:\n");
        for(int i=0;i<(ogrenci+(ogr-1))->ders_sayisi;i++)          //ogrenci bulununca bu ogrencinin bilgilerinin oldugu Ogrenciler struct'ina gidilir
                                                                 //ve oradaki bilgiler ekrana yazilir.
        {
            printf("%d.Dersin adi:%s\n",i+1,(((ogrenci+(ogr-1))->p_dersler)+i)->isim);
            printf("%d.Dersin vize notu:%d\n",i+1,(((ogrenci+(ogr-1))->p_dersler)+i)->vize);
            printf("%d.Dersin final notu:%d\n",i+1,(((ogrenci+(ogr-1))->p_dersler)+i)->finall);
            printf("\n");
        }
        printf("Kacinci dersi guncellemek istiyorsunuz? =>");
        int ders;
        scanf("%d",&ders);                                      //ekrana yazilan derslerden secim yapilarak istenilen derste degisiklik yapilabilir.

        if(ders <= 0 || ders > (ogrenci+(ogr-1))->ders_sayisi)
        {
            printf("Boyle bir ders bulunmamaktadir! Lutfen tekrar deneyiniz.\n\n");
        }
        else
        {
            printf("%d.Dersin yeni vize notu:",ders);
            scanf("%d",&(((ogrenci+(ogr-1))->p_dersler)+(ders-1))->vize);
            printf("%d.Dersin yeni final notu:",ders);
            scanf("%d",&(((ogrenci+(ogr-1))->p_dersler)+(ders-1))->finall);
        }
    }
}
void gecme_notu_hesaplama()
{
    for(int i=0;i<ogrenciSayisi;i++)
    {
        for(int j=0;j<(ogrenci+i)->ders_sayisi;j++)
        {
            (((ogrenci+i)->p_dersler)+j)->gecme_Notu=(((ogrenci+i)->p_dersler)+j)->vize*0.4+(((ogrenci+i)->p_dersler)+j)->finall*0.6;
            //ogrenciye ait bilgilerin oldugu struct'a giderek orada ogrencinin vize ve final notunu alır.
           //Vizenin %40'i finalin %60'ini alarak gecme kalma notunu hesaplar.
        }
    }
}
int main()
{
    int tus;           //menu ve switch-case yapisi icin gerekli atamalar yapildi.
    int menu=1;
    while(menu)      //while ile yari sonsuz dongu olusturuldu 0 girilirse dongu 0 oldugu icin sonsuz donguden cikilir ve bu sayede otomasyon kapatilir.
    {
        printf("\n\n--------------------OGRENCI BILGI SISTEMI OTOMASYONU--------------------\n\n");  //otomasyon menusu
        printf("[1] - Ogrenci Ekleme\n");
        printf("[2] - Kayitlari listeleme\n");
        printf("[3] - Ogrenci Arama\n");
        printf("[4] - Not guncelleme\n");
        printf("[5] - Kayit silme\n");
        printf("[0] - Cikis\n");
        printf("\n\n------------------------------------------------------------------------\n\n");

        printf("Yapmak istediginiz islemi seciniz => ");
        scanf("%d",&tus);
        char ad[20];
        int dersSayisi;
        int ogrenci;
        switch(tus)
        {
        case 1:
            printf("Ogrencinin ismi nedir? (Iki ismi olanlarda arada _ isareti olacak sekilde giris yapiniz!) =>");
            scanf("%s",ad);
            printf("%s adli ogrencinin kac dersi var? =>",ad);
            scanf("%d",&dersSayisi);
            ogrenci_ekle(ad,dersSayisi);       //fonksiyonlardaki degiskenlere degerler gonderir.
            gecme_notu_hesaplama();
            break;
        case 2:
             kayitli_ogrencileri_listeleme(); break;
        case 3:
            printf("Aradiginiz ogrencinin ismi nedir? (Iki ismi olanlarda arada _ isareti olacak sekilde giris yapiniz!) =>");
            scanf("%s",ad);
            ogrenci_arama(ad);
            break;
        case 4:
           printf("Kacinci ogrencinin notunu guncellemek istiyorsunuz?(Isim degil deger giriniz) =>");
            scanf("%d",&ogrenci);
            not_guncelleme(ogrenci);
            gecme_notu_hesaplama();
            break;
        case 5:
             printf("Kacinci ogrenciyi silmek istiyorsunuz? (Isim degil deger giriniz!) =>");
            scanf("%d",&ogrenci);
            kayit_silme(ogrenci);
            break;
        case 0:
            menu=0; break;
        default:
            printf("Yanlis secim! Lutfen menudeki degerlerden birini giriniz.\n");   //menudeki islemlerden biri tuslanmazsa hatali secim uyarisi verir.
        }
        printf("Ana menuye donmek ya da cikis yapmak icin bir tusa basiniz:");
        getch();             //yapilan islemlerden sonra menuye donmek icin kullanicinin girecegi deger getch ile tutulur.

    }


    return 0;
}
