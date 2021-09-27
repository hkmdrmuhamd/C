#include<stdio.h>
#include<stdlib.h>


typedef struct Dersler
{
    char isim;
   struct Dersler *sonraki;
} Ders;



void liste_yaz(Ders *ptr);

int main()
{
    Ders *p1, *p2, *p3;

    p1 =malloc(sizeof(Ders));
    p2 =malloc(sizeof(Ders));
    p3 =malloc(sizeof(Ders));

    p1 ->isim = 'S';
    p1 ->sonraki = p2;
    p2->isim= 'I';
    p2->sonraki =p3;
    p3 ->isim = 'R';
    p3->sonraki =NULL;

    printf("Baglantii liste: \n");
    liste_yaz(p1);

    return 0;
}

void liste_yaz(Ders *ptr)
{
    while (ptr != NULL)
    {
        printf("%c",ptr->isim);
        ptr = ptr -> sonraki;
    }
    printf("\n");
}

