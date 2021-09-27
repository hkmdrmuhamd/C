#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int diziler[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int boyut=sizeof(diziler)/sizeof(diziler[0]);

    for(i=0;i<boyut;i++)
    {
        for(j=0;j<boyut;j++)
        {
            printf("%3d",diziler[i][j]);
        }
        printf("\n");
    }
    return 0;
}
