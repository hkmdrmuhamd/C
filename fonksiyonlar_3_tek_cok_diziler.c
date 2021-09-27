#include <stdio.h>
#include <stdlib.h>

void bastir(int matris[][3],int indis)
{
    int i,j;
    for (i=0;i<indis;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%3d",matris[i][j]);
        }
         printf("\n");
    }

}
int main()
{
   int dizi[3][3];
   int i,j;
   int boyut1=sizeof(dizi)/sizeof(dizi[0]);
   int boyut2=sizeof(dizi[0])/sizeof(dizi[0][0]);

   printf("Diziye atamak istediginiz degerleri giriniz -->");

   for (i=0;i<boyut1;i++)
   {
       for (j=0;j<boyut2;j++)
       {
           scanf("%d",&dizi[i][j]);
       }
   }
   bastir(dizi,3);

    return 0;
}
