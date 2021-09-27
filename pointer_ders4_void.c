#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kar='a';
    int tam=66;
    double ger=1.2;
    void *veri;

    veri=&kar;
    printf("void --> kar degiskeninin degerini %c olarak tutuyor\n",*(char *)veri);

    veri=&tam;
    printf("void --> tam degiskeninin degerini %d olarak tutuyor\n",*(int *)veri);

    veri=&ger;
    printf("void --> ger degiskeninin degerini %lf olarak tutuyor\n",*(double *)veri);

    //kisaca void birden fazla tanimlamayi tutabiliyor.(int, double,char vs.)
    return 0;
}
