#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=5, b=10;
    int *psayi, *qsayi, *pdizi, *pmat;
    int dizi[5]={1,8,3,12,9};
    int matris[3][3]={{1,6,4},{12,22,13},{9,15,21}};
    psayi = &a;
    qsayi = &b;


    printf("LEVEL 1 - SAYI\n");
    printf("---------------------------------------\n");
    printf("psayi Deger: %d, qsayi Deger: %d\n",*psayi,*qsayi);
    printf("psayi tuttugu adres: %d , qsayi tuttugu adres: %d\n",psayi,qsayi);
    printf("psayi Deger %d, qsayi Deger: %d\n",++*psayi,++*qsayi);
    printf("a= %d, b= %d\n",a,b);
    printf("psayi degeri: %d, qsayi degeri: %d\n",*--psayi,*++qsayi);
    printf("psayi degeri: %d, qsayi degeri: %d\n",*psayi++,*qsayi--);
    printf("psayi degeri: %d, qsayi degeri: %d\n",*psayi,*qsayi);
    printf("--------------------------------------------\n");




    printf("\nLEVEL 2 - DIZI\n");
    printf("--------------------------------------------\n");


    pdizi=&dizi[0];
    printf("dizi tuttugu adres: %d, pdizi tuttugu adres: %d\n",dizi,pdizi);
    printf("dizi degeri: %d, pdizi degeri: %d\n",*dizi,*pdizi);
    printf("dizi+1 tuttugu adres: %d, pdizi+1 tuttugu adres: %d\n",dizi+1,pdizi+1);
    printf("dizi+1 tuttugu adres: %d, pdizi+1 tuttugu adres: %d\n",dizi+1,pdizi++);
    printf("pdizi++ artirma islemi yukarda yapildi bir kere daha yazdirdik: %d\n",pdizi);
    printf("dizi+3 degeri: %d, pdizi+3 degeri: %d\n",*(dizi+3),*(pdizi+3));
    printf("*pdizi++ degeri: %d\n",*pdizi++);
    printf("*pdizi++ degeri: %d\n",*pdizi++);
    pdizi=dizi; //pdizi=&dizi[0];
    printf("*++dizi deger: %d\n",*++pdizi);
    printf("------------------------------------------------\n");




    printf("\nLEVEL 3 - MATRIS\n");
    printf("-------------------------------------------------\n");


    pmat=&matris[0][0];
    printf("pmat tuttugu adres: %d , pmat tuttugu adres: %d\n",pmat,matris);
    printf("pmat degeri: %d ,matris degeri: %d\n",*pmat,*matris);
    printf("pmat degeri: %d ,matris degeri: %d\n",*pmat,**matris);
    printf("pmat+1 adresi: %d, matris+1 adresi: %d\n",pmat+1,matris+1);
    printf("pmat+1 degeri: %d, matris+1 degeri: %d\n",*(pmat+1),**(matris+1));
    printf("pmat+1 degeri: %d, *(*matris+1) degeri: %d\n",*(pmat+1),*(*matris+1));
    printf("pmat+5 degeri: %d, *(*(matris+1)+2) degeri: %d\n",*(pmat+5),*(*(matris+1)+2));
    printf("------------------------------------------------\n");
    return 0;
}
