#include <stdio.h>
 #include <conio.h>

// * �ekli ile kum saati yapma
// Cemalettin Serit ckaynak.com | teknooneri.com | cemserit.com | wpeklentiler.com


int main(){

    int satir, boslukSayisi, yildizSayisi, i, j;

// 23 sat�rdan olu�uyor
    satir = 23;

// �lk sat�rda bo�luk yok
    boslukSayisi = 0;

// �lk sat�rda satir sayisi kadar y�ld�z var
    yildizSayisi = satir;

// �lk for satir say�s� kadar yazd�r�r
    for(i=0; i<satir; i++){

// �kinci for y�ld�zlar� yazd�r�r
        for(j=0; j<yildizSayisi;j++)
            printf("*");

// Kum saati yar�s�n� ge�ene kadar y�ld�z azal�r, bo�luk artar
        if( i < (satir / 2) ){
            yildizSayisi-=2;
            boslukSayisi++;
        }

// Kum saatinin yar�s�ndan sonra y�ld�z artar, bo�luk azal�r
        else{
            yildizSayisi+=2;
            boslukSayisi--;
        }

// A�a�� sat�ra ge�ilip bo�luk yazd�r�l�r
        printf("\n");
        for(j=0; j<boslukSayisi;j++)
            printf(" ");

    }
    return 0;

}
