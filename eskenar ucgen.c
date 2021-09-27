#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,k,giris=10,bosluk,yildiz=1,i,j;
    bosluk=giris-1;
    for(k=0; k<giris; k++)
    {
        for(s=0; s<bosluk; s++)
        {
            printf(" ");
        }
        for (s=0; s<yildiz; s++)
        {
            printf("*");
        }
        bosluk--;
        yildiz++;
        for(j=1; j<=s; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
