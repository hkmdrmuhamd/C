#include <stdio.h>
#include <stdlib.h>

int main()
{
   int dizi[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   int i,j;
   int r=sizeof(dizi)/sizeof(dizi[0]);

   for (i=0;i<r-1;i++)
   {
       for (j=i+1;j<r;j++)
       {
           if (i==0 && j==0 > i==0 && j==1)
         {
             if (i==0 && j==0 > i==0 && j==2)
                printf("%d",dizi[0][0]);
                else
                    printf("%d\n",dizi[0][2]);
         }
         else if (i==0 && j==1 > i==0 && j==2)
            printf("%d\n",dizi[0][1]);
         else
         {
             printf("%d\n",dizi[0][2]);
         }
         break;
       }
       break;
   }
   for (i=0;i<r-1;i++)
   {
       for (j=i+1;j<r;j++)
       {
           if (i==1 && j==0 > i==1 && j==1)
         {
             if (i==1 && j==0 > i==1 && j==2)
                printf("%d",dizi[1][0]);
                else
                    printf("%d\n",dizi[1][2]);
         }
         else if (i==1 && j==1 > i==1 && j==2)
            printf("%d\n",dizi[1][1]);
         else
         {
             printf("%d\n",dizi[1][2]);
         }
         break;
       }
       break;
   }
    for (i=0;i<r-1;i++)
   {
       for (j=i+1;j<r;j++)
       {
           if (i==2 && j==0 > i==2 && j==1)
         {
             if (i==2 && j==0 > i==2 && j==2)
                printf("%d",dizi[2][0]);
                else
                    printf("%d\n",dizi[2][2]);
         }
         else if (i==2 && j==1 > i==2 && j==2)
            printf("%d\n",dizi[2][1]);
         else
         {
             printf("%d\n",dizi[2][2]);
         }
         break;
       }
       break;
   }

    return 0;
}
