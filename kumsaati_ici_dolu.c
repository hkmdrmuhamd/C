#include <stdio.h>
 #include <conio.h>

// * þekli ile kum saati yapma
// Cemalettin Serit ckaynak.com | teknooneri.com | cemserit.com | wpeklentiler.com


int main(){

    int satir, boslukSayisi, yildizSayisi, i, j;

// 23 satýrdan oluþuyor
    satir = 23;

// Ýlk satýrda boþluk yok
    boslukSayisi = 0;

// Ýlk satýrda satir sayisi kadar yýldýz var
    yildizSayisi = satir;

// Ýlk for satir sayýsý kadar yazdýrýr
    for(i=0; i<satir; i++){

// Ýkinci for yýldýzlarý yazdýrýr
        for(j=0; j<yildizSayisi;j++)
            printf("*");

// Kum saati yarýsýný geçene kadar yýldýz azalýr, boþluk artar
        if( i < (satir / 2) ){
            yildizSayisi-=2;
            boslukSayisi++;
        }

// Kum saatinin yarýsýndan sonra yýldýz artar, boþluk azalýr
        else{
            yildizSayisi+=2;
            boslukSayisi--;
        }

// Aþaðý satýra geçilip boþluk yazdýrýlýr
        printf("\n");
        for(j=0; j<boslukSayisi;j++)
            printf(" ");

    }
    return 0;

}
