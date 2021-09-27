#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *sehirler[]={"Malatya","Mersin","Konya","Istanbul",'\0'};
    for(int i=0;sehirler[i]!=NULL;i++)
    {
        printf("%s\n",*(sehirler+i));
    }
    return 0;
}
