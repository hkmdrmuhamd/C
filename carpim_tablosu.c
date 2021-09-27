#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j,carpim;
   for (i=1;i<10;i++)
   {
       for (j=1;j<10;j++)
       {
           carpim=i*j;
           printf("%d x %d = %d\t",i,j,carpim);
       }

   printf("\n");
   }

    return 0;
}
