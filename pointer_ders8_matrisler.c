#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int *p;
    int boyut=sizeof(dizi)/sizeof(dizi[0]);
    p=&dizi[0][0];

    for (int i=0; i<boyut; i++)
    {
        for (int j=0; j<=boyut; j++)
        {
            printf("%d\t",*(*(dizi+i)+j));
        }
        printf("\n");
    }
    return 0;
}
