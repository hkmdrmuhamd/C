#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, a[10]={1,5,3,2,4,6,7,9,8,10};
    int *p;
    int boyut=sizeof(a)/sizeof(a[0]);
    p=&a[0];

    for (int i=0;i<boyut;i++)
    {
        t+= *(p+i);
    }
    printf("Dizinin elemanlari toplami --> %d\n",t);
    return 0;
}
