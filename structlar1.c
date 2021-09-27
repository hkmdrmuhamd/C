#include <stdio.h>
#include <stdlib.h>

typedef struct Telefon
{
    char ad[20];
    char soyad[20];
    int telefon;
}tel;

tel *t;

int main()
{
    t = (tel*)malloc(sizeof(tel));
        int a;
        int kayit;
        printf("Kac kisinin bilgisini tutacaksiniz: ");
        scanf("%d",&a);

        for (int i=0;i<a;i++)
        {
        printf("Isim girin: \n"); scanf("%s",&(t+i)->ad);
        printf("Soyad: \n"); scanf("%s",&(t+i)->soyad);
        printf("telefon: \n"); scanf("%d",&(t+i)->telefon);
        }
       printf("\n\n");
      for (int i=0;i<a;i++)
      {
        printf("Isim %s\n",(t+i)->ad);
        printf("Soyad %s\n",(t+i)->soyad);
        printf("telefon %d\n",(t+i)->telefon);
        printf("\n");
      }
      printf("Hangi kaydi sileceksiniz: ");
      scanf("%d",&kayit);
      for (int i=kayit;i<a;i++)
      {
          *(t+(i-1))=*(t+i);
      }
      a--;
      t= (tel*)realloc(t,sizeof(tel)*a);

         for (int i=0;i<a;i++)
      {
        printf("Isim %s\n",(t+i)->ad);
        printf("Soyad %s\n",(t+i)->soyad);
        printf("telefon %d\n",(t+i)->telefon);
        printf("\n");
      }

         free(t);
    return 0;
}
