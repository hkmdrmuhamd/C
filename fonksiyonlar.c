#include <stdio.h>
#include <stdlib.h>


void cemberin_alani(int r)
{
    float alan,pi=3.14;
    alan=pi*r*r;
    printf("%0.2f",alan);
}

int main()
{
  int yari_cap;
  printf("Alanini hesaplamak istediginiz cemberin yari capini giriniz --> ");
  scanf("%d",&yari_cap);
  cemberin_alani(yari_cap);
    return 0;
}
