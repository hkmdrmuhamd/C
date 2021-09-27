#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j,giris=10,bosluk,yildiz;
   bosluk=giris-1;
   yildiz=1;
   for(i=1;i<=giris;i++)
   {
       for (j=0;j<bosluk;j++)
       {
           printf(" ");
       }
       for(j=1;j<=yildiz;j++)
       {
           printf("*");
       }
       bosluk--;
       yildiz+=2;
        printf("\n");
   }
   bosluk=0;                 //ustteki donguden dolayi belli bir bosluk degeri hafizaya almisti bunu sifirlamak icin yapilir.
   yildiz-=2;                /*ustteki dongu bittiginde en son yildiz degeri 2 artmaktadir fakat bu artimi gostermez bir sonraki dongude gosterir alttaki
   dongu karonun alt kismi oldugu icin en son kadigi yildiz sayisini almasi gerekir bu sebeple bu islem yapilir.*/
   for(i=1;i<=giris;i++)
   {
       for (j=0;j<bosluk;j++)
       {
           printf(" ");
       }
       for(j=1;j<=yildiz;j++)
       {
           printf("*");
       }
       bosluk++;            //karonun alt kisminda herbir alt satira gecildiginde 1 bosluk artar.
       yildiz-=2;          //karo cizimi yapilirsa gorulecektir ki her alt satira gecildiginde yildiz sayisi 2 azalmaktadir bu istemin sebebi budur.
        printf("\n");
   }
   /*eger ortadaki fazlalik olan yildizlari silmek istiyosak alt kisima gectigimizde yildiz sayisini -2 degilde -4 den baslatip(cunku 2.satirda bu sekilde)
   ve bosluk sayisini 0 dan degilde 1 den baslatip (cunku bir satir yok ediyoruz yani bi alt satira geciyoruz bir alt satirda da 1 bosluk olmasi lazim)
   bu sekilde yapabiliriz */
    return 0;
}
