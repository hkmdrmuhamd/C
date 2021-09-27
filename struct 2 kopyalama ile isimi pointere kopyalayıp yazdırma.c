#include <stdio.h>
#include <stdlib.h>

void copy(char *k1, char *k2){
    while (*k1++ = *k2++);
}

typedef struct ogrenciler{
    char ogrenci_ad[30];

}OGR;

OGR *ogrenci;
int main(){
    char ad[30];
    printf("ad:");
    scanf("%s",ad);
    ogrenci = (OGR*) malloc(sizeof(OGR));
    copy(ogrenci->ogrenci_ad,ad);
    printf("Ogrenci ad: %s",ogrenci->ogrenci_ad);
    return 0;
}
