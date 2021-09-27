#include <stdio.h>
#include <stdlib.h>
#include <string.h> //strlen() fonksiyonu icin;

int main()
{
    char sentence[100] = "Mehmetin VE Ahmet VE Ali VE Ayse VE Sena Mehmeti";
    char *findingStr = "VE";
    char *point = sentence;
    int count = 0;

    int boyut = strlen(sentence); //boyut = sizeof(sentence)/sizeof(sentence[0]);


    for (int i = 0; i < boyut; i++)
    {
        if (*(point+i) == *(findingStr) && *(point+i+1) == *(findingStr+1))
            count++;
    }
    printf("%d\n",count);

    //---------------------------------------------------------------------------------

    char *aranacak = "aranacak metini ara";
    char *aranan = "ara";
    char *aranan_index, *temp_arama;

    int sayac = 0, kontrol;

    while(*aranacak)
    {
        aranan_index=aranan;
        kontrol = 0;
        if (*aranacak == *aranan_index)
        {
            aranan_index++;
            temp_arama = aranacak + 1;
            while(*aranan_index && *temp_arama)
            {
                if(*temp_arama != *aranan_index)
                {
                    kontrol=1;
                    break;
                }
                aranan_index++;
                temp_arama++;
            }
            if (kontrol == 0 && !*aranan_index)
            {
                sayac++;
            }
        }
        aranacak++;
    }
    printf("%d\n",sayac);

   return 0;
}

