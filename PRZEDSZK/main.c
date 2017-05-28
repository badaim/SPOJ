#include<stdio.h>

int liczba_zestawow;
int liczba_cukierkow[20];
int grupa_1;
int grupa_2;
int licznik;
int NWW(int grupa_1,int grupa_2);
void wyswietl_wynik(int liczba_cukierkow[],int licznik);

int main()

        {
            int i;
            licznik = 0;
            scanf("%d", &liczba_zestawow);
            for (i = 0 ; i < liczba_zestawow; i++)
                {
                    scanf("%d %d", &grupa_1, &grupa_2);
                    liczba_cukierkow[i] = NWW(grupa_1,grupa_2);
                    licznik++;
                }
            wyswietl_wynik(liczba_cukierkow,licznik);
            return 0;
        }

int NWW(grupa_1,grupa_2)
{
    int il,t;
    il = grupa_1 * grupa_2;
    while(grupa_2)
    {
        t = grupa_2;
        grupa_2 = grupa_1 % grupa_2;
        grupa_1 = t;
    }
    il /= grupa_1;
    return il;
}

void wyswietl_wynik(int liczba_cukierkow[],int licznik)
{
    int i;
    for(i=0;i<licznik;i++)
    {
        printf("%d\n",liczba_cukierkow[i]);
    }
}
