#include <stdio.h>
#include <stdlib.h>

int main()
{
   char *kelime1="Muhammed", *kelime2="Ayse", *kelime3="Osman";
   char *kelimeler[3];
   int i;
   kelimeler[0]=kelime1;
   kelimeler[1]=kelime2;
   kelimeler[2]=kelime3;
   for (i=0;i<3;i++)
   {
   printf("%s\n",*(kelimeler+i));
   }

    return 0;
}
