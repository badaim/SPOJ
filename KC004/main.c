#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *v;
    int i;
    int poszukiwana_liczba;
    int liczba_wystapien;

    int dlugosc_ciagu;
    while (scanf("%d",&poszukiwana_liczba)!=EOF)
    {

            scanf("%d",&dlugosc_ciagu);
            v = malloc(dlugosc_ciagu * sizeof(int));
            for (i = 0; i < dlugosc_ciagu; i++)
                {
                    scanf("%d",&v[i]);
                }
            liczba_wystapien = 0;
            for (i = 0; i < dlugosc_ciagu; i++)
                {
                    if (v[i] == poszukiwana_liczba)
                        {
                            liczba_wystapien++;
                        }
                }

            free(v);
            printf("%d\n",liczba_wystapien);
    }

    return 0;
    