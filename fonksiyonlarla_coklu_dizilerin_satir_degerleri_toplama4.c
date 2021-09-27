#include <stdio.h>
#include <stdlib.h>

void bastir(int dizi[][3],int indis)
{
    int i,j;
    for (i=0;i<indis;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("%d\t",dizi[i][j]);
        }
        printf("\n");
    }
}
void toplama(int dizi[][3],int indis)
{
    int i,j,temp=0,temp1=0,temp2=0;
    for (i=0;i<indis;i++)
    {
        for (j=0; j<3; j++)
        {
            if (i==0 && j==0 || i==0 && j==1|| i==0 && j==2)
                temp+=dizi[i][j];
           else if (i==1 && j==0 || i==1 && j==1|| i==1 && j==2)
            temp1+=dizi[i][j];
            else if (i==2 && j==0 || i==2 && j==1|| i==2 && j==2)
            temp2+=dizi[i][j];
        }
    }
    printf("\n");
    printf("%d\t",temp);
    printf("%d\t",temp1);
    printf("%d\t",temp2);
}
int main()
{
  int dizi[3][3];
  int boyut1=sizeof(dizi)/sizeof(dizi[0]);
  int boyut2=sizeof(dizi[0])/sizeof(dizi[0][0]);
  int i,j;

  for(i=0;i<boyut1;i++)
  {
      for (j=0;j<boyut2;j++)
      {
          printf("Dizinin icine atmak istediginiz bir degeri giriniz --> ");
          scanf("%d",&dizi[i][j]);
      }
  }
  bastir(dizi,3);
  toplama(dizi,3);

    return 0;
}
