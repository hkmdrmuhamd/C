#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,boyut;
  printf("Bir boyur degeri giriniz:");
  scanf("%d",&boyut);
  for (i=1;i<=boyut;i++)
  {
      for (j=1;j<=boyut;j++)
      {
          if (j==i || j==boyut-i+1 || i==1 || i==boyut)
          {
              printf("*");
          }
          else
            printf(" ");
      }
      printf("\n");
  }
    return 0;
}
