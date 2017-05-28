#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
#define SZYFRUJ "SZYFRUJ"
#define DESZYFRUJ "DESZYFRUJ"
#define MAX 10

const char ALFABET[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
void szyfruj(char tekst[100],int dl_klucza, char klucz[]);
void deszyfruj(char tekst[100],int dl_klucza,char klucz[]);

void main()
{
    char *klucz = malloc(MAX * sizeof(char));
    char tekst[100];
    char metoda[15];
    scanf("%s",metoda);
    scanf("%s",klucz);
    scanf("%s",tekst);
    int dl_klucza;
    dl_klucza = sizeof(klucz)/sizeof(char);
    if (strcmp(SZYFRUJ,metoda)==0)
        {
            szyfruj(tekst,dl_klucza,klucz);
            free(klucz);

        }
    else
        {
            deszyfruj(tekst,dl_klucza,klucz);
            free(klucz);
        }

}
void szyfruj(char tekst[100],int dl_klucza,char klucz[])
{
    int i=0;
    int t=0;
    int x;
    while (tekst[i]!='\0')
    {
        for(x=0;x<=25;x++)
        {
            if (ALFABET[x]==tekst[i])
            {
                if(t<=dl_klucza)
                {
                 printf("%c",ALFABET[x]+(klucz[t]-'0'));
                 t++;

                }
                else
                {
                    t = 0;
                    x = 0;
                }
            }
        }
        i++;
    }
}
void deszyfruj(char tekst[100],int dl_klucza, char klucz[])
{
    int i=0;
    int t=0;
    int x;
    while (tekst[i]!='\0')
    {
        for(x=0;x<=25;x++)
        {
            if (ALFABET[x]==tekst[i])
            {
                if(t<=dl_klucza)
                {
                 printf("%c",ALFABET[x]-(klucz[t]-'0'));
                 t++;

                }
                else
                {
                    t = 0;
                    x = 0;
                }
            }
        }
        i++;
    }
}
