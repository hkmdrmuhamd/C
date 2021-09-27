#include <stdio.h>
#include <stdlib.h>

int main()
{
   int dizi[5][4]={{2,8,9,11},{10,1,6,5},{12,13,14,15},{17,18,19,20},{3,4,7,16}};
   int dizi1[5][4];
   int boyut_satir=sizeof(dizi)/sizeof(dizi[0]);
   int boyut_sutun=sizeof(dizi[0])/sizeof(dizi[0][0]);
   int i,j,temp,satir_toplam,yerlesecek_indis;
   int dizi_indis[boyut_satir],dizi_toplam[boyut_satir];
   for (i=0;i<boyut_satir;i++)
   {
       satir_toplam=0;
       for (j=0;j<boyut_satir;j++)
       {
           satir_toplam+=dizi[i][j];
           dizi_indis[i]=i;
           dizi_toplam[i]=satir_toplam;
       }
   }
   for (i=0;i<boyut_satir-1;i++)
   {
       for (j=i+1;j<boyut_satir;j++)
       {
           if(dizi_toplam[i]>dizi_toplam[j])
           {
               temp=dizi_toplam[i];
               dizi_toplam[i]=dizi_toplam[j];
               dizi_toplam[j]=temp;

               temp=dizi_indis[i];
               dizi_indis[i]=dizi_indis[j];
               dizi_indis[j]=temp;
           }
       }
   }
   for (i=0;i<boyut_satir;i++)
   {
       yerlesecek_indis=dizi_indis[i];
       for (j=0;j<boyut_sutun;j++)
       {
           dizi1[i][j]=dizi[yerlesecek_indis][j];
           printf("%d\t",dizi[yerlesecek_indis][j]);
       }
       printf("\n");
   }

    return 0;
}
