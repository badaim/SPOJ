#include <stdio.h>
const char ALFABET[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
void szyfruj(char tekst[100]);
void main()
{
    char tekst[100];
    while (gets(tekst)!=NULL)
    {
      szyfruj(tekst);
      printf("\n");
    }


}
void szyfruj(char tekst[100])
{
    int i=0;
    int x;
    while (tekst[i]!='\0')
    {
        for(x=0;x<=25;x++)
        {
            if (ALFABET[x]==tekst[i] && tekst[i]!='Z' && tekst[i]!='Y' && tekst[i]!='X')

            {
                printf("%c",ALFABET[x]+3);
            }

        }

        if (tekst[i]==32)
        {
            printf(" ");
        }
        else if(tekst[i]=='Z')
        {
            printf("C");
        }
        else if (tekst[i]=='Y')
        {
            printf("B");
        }
        else if (tekst[i]=='X')
        {
            printf("A");
        }

        i++;
    }
}
