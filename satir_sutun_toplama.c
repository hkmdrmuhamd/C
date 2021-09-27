#include <stdio.h>
#include <stdlib.h>

int main()
{
   int matris[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   int i,j,boyut=sizeof(matris)/sizeof(matris[0]);
   int satir1_toplam=0,satir2_toplam=0,satir3_toplam=0;
   int sutun1_toplam=0,sutun2_toplam=0,sutun3_toplam=0;

   for(i=0;i<boyut;i++)
   {
       for (j=0;j<boyut;j++)
       {
           printf("%d\t",matris[i][j]);
       }
       printf("\n");
   }
   for (i=0;i<boyut;i++)
   {
       for (j=0;j<boyut;j++)
       {
           if (i==0&&j==0||i==0&&j==1||i==0&&j==2)
            satir1_toplam+=matris[i][j];

        else if (i==1&&j==0||i==1&&j==1||i==1&&j==2)
        satir2_toplam+=matris[i][j];

        else if (i==2&&j==0||i==2&&j==1||i==2&&j==2)
            satir3_toplam+=matris[i][j];
       }
   }
   for (i=0;i<boyut;i++)
   {
       for (j=0;j<boyut;j++)
       {
           if (i==0&&j==0||i==1&&j==0||i==2&&j==0)
            sutun1_toplam+=matris[i][j];

        else if (i==0&&j==1||i==1&&j==1||i==2&&j==1)
        sutun2_toplam+=matris[i][j];

        else if (i==0&&j==2||i==1&&j==2||i==2&&j==2)
            sutun3_toplam+=matris[i][j];
       }
   }
   int A[3]={satir1_toplam,satir2_toplam,satir3_toplam};
   int a_boyut=sizeof(A)/sizeof(A[0]);
   printf("Satir degerleri toplami:\n");
   for (i=0;i<a_boyut;i++)
   {
           printf("%d\t",A[i]);
   }
   printf("\n");
   int B[3]={sutun1_toplam,sutun2_toplam,sutun3_toplam};
   int b_boyut=sizeof(B)/sizeof(B[0]);
  printf("Sutun degerleri toplami:\n");
   for (i=0;i<b_boyut;i++)
   {
           printf("%d\t",B[i]);
   }
    return 0;
}
