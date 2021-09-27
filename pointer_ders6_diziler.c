#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[]={5,8,10,22,12,6};
    int *ptr,boyut;
    boyut=sizeof (dizi)/sizeof(dizi[0]);

    for (int i=0;i<boyut;i++)
    {
       ptr=&dizi[i];
       printf("Dizinin %d. elemaninin adresi= %x degeri= %d\n",i+1,ptr,*ptr);
    }
    return 0;
}
