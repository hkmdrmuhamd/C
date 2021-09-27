#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
   int x=1, y=2, z[10];

   int *ip;

   ip = &x;   x in adresi ip pointerina aktarildi.
   y = *ip;   y nin su andaki degeri 1;
   *ip = 0;   x in su andaki degeri 0;
   ip = z[0]; z dizisinin ilk elemaninin adresi ip pointerina atanmis.
  */

  int* pc,c;

  c=22;
  printf("c degiskeninin adresi=%p\n",&c);
  printf("c degiskeninin degeri=%d\n",c);

  pc=&c;
   printf("pc pointerinin adresi=%p\n", pc);
  printf("pc pointerinin degeri=%d\n",*pc);

  *pc=2;
  printf("c degiskeninin adresi=%p\n",&c);
  printf("c degiskeninin degeri=%d\n",c);
return 0;
}
