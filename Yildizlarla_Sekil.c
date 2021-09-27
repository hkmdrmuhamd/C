#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("**********Muhammed Hukumdar-20010011067**********\n\n");
    int boyut,satir,m,u,h,a,e,d,k,r,r1;                             //Gereken harfler degisken olarak atanmistir.
    printf("Boyut Icin Bir Tam Sayi Degerini Giriniz =");
    scanf("%d",&boyut);
    if (boyut>=8)                                                //Burada if, girilmesi gerekenden daha kucuk bir degerin girilip girilmedigini kontrol icindir.
    {
        for(satir=1; satir<=boyut; satir++)                          //Satir degeri ile harfde yazilmasi gereken yildizlarin yerleri belirlenir.
        {
            for(m=1; m<=boyut; m++)
            {
                if(m==1 || m==boyut || satir==1 || m==boyut/2)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        printf("\n");
        for (satir=1; satir<=boyut; satir++)
        {
            for (u=1; u<=boyut; u++)
            {
                if (u==1 || u==boyut || satir==boyut)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        printf("\n");
        for (satir=1; satir<=boyut; satir++)
        {
            for (h=1; h<=boyut; h++)
            {
                if (h==1 || h==boyut || satir==boyut/2)   //satir==boyut/2 ile satirin harfi ortalayip yildiz yazdirmasi saglanir.(Tek degerler icin belli bir deger alir ortalamaz)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        printf("\n");
        for (satir=1; satir<=boyut; satir++)
        {
            for (a=1; a<=boyut; a++)
            {
                if (a==1 || a==boyut || satir==1 || satir==boyut/2)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        printf("\n");
        for (satir=1; satir<=boyut; satir++)
        {
            for(m=1; m<=boyut; m++)
            {
                if(m==1 || m==boyut || satir==1 || m==boyut/2)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        printf("\n");
        for(satir=1; satir<=boyut; satir++)
        {
            for(m=1; m<=boyut; m++)
            {
                if(m==1 || m==boyut || satir==1 || m==boyut/2)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        printf("\n");
        for(satir=1; satir<=boyut; satir++)
        {
            for (e=1; e<=boyut; e++)
            {
                if (e==1 || satir==1 || satir==boyut/2 || satir==boyut)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        printf("\n");
        for(satir=1; satir<=boyut; satir++)
        {
            for(d=1; d<=boyut; d++)
            {
                if(d==1)
                {
                    printf("*");
                }
                if (d==boyut && satir==boyut || d==boyut && satir==1)           /*Burdaki amac son satirin ve son sutunun ; ilk satirin ve son sutunun
           koselerine bosluk karekteri basmasini saglamaktir*/
                {
                    printf(" ");
                }
                else if (d==boyut || satir==boyut || satir==1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n\n");
        for (satir=1; satir<=boyut; satir++)
        {
            for (h=1; h<=boyut; h++)
            {
                if (h==1 || h==boyut || satir==boyut/2)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        printf("\n");
        for (satir=1; satir<=boyut; satir++)
        {
            for (u=1; u<=boyut; u++)
            {
                if (u==1 || u==boyut || satir==boyut)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        printf("\n");
        for(satir=1; satir<=boyut; satir++)
        {
            for (k=1; k<=boyut; k++)
            {
                if (k==1 || k==(boyut+2)/2-satir || k==satir-(boyut-satir)) //k==(boyut+2)/2-satir kodunu ve k==satir-(boyut-satir) kodunu yazmadaki amac K harfinin capraz olan kisimlarina yildiz basmasini saglamaktir.
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        printf("\n");
        for (satir=1; satir<=boyut; satir++)
        {
            for (u=1; u<=boyut; u++)
            {
                if (u==1 || u==boyut || satir==boyut)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        printf("\n");
        for(satir=1; satir<=boyut; satir++)
        {
            for(m=1; m<=boyut; m++)
            {
                if(m==1 || m==boyut || satir==1 || m==boyut/2)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        printf("\n");
        for(satir=1; satir<=boyut; satir++)
        {
            for(d=1; d<=boyut; d++)
            {
                if(d==1)
                {
                    printf("*");
                }
                if (d==boyut && satir==boyut || d==boyut && satir==1 )
                {
                    printf(" ");
                }
                else if (d==boyut || satir==boyut || satir==1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n\n");
        for (satir=1; satir<=boyut; satir++)
        {
            for (a=1; a<=boyut; a++)
            {
                if (a==1 || a==boyut || satir==1 || satir==boyut/2)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        printf("\n");
        for (satir=1; satir<=boyut; satir++)
        {
            for (r=1; r<=boyut; r++)
            {
                if (r==1 || satir==1 || satir==boyut || r==boyut)      //R'nin ust yani yuvarlak olan kismi icindir.
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        for(satir=1; satir<=boyut; satir++)                             //R'nin ayak kisimlari icindir.
        {
            for(r1=1; r1<=boyut; r1++)
            {
                if (r1==1 || r1==satir)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    else
        printf("Girilmesi gereken degerden dusuk bir deger girdiniz! (Min=8)\n"); //Girilmesi gerekenden daha kucuk bir deger girilince ekrana uyari verilmesi icindir.
    return 0;
}
