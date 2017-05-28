#include <stdio.h>
#include <math.h>
#define PRAWDA "TAK"
#define NIEPRAWDA "NIE"
int main()
    {
    int liczba_testow;
    int liczba;
    double pierwiastek;
    int x,i,licznik;
    scanf("%d",&liczba_testow);
    while(liczba_testow--)
            {
                scanf("%d",&liczba);
                pierwiastek = sqrt(liczba);
                licznik=0;
                if (liczba == 0 || liczba == 1)
                {
                    printf("NIE\n");

                }
                else
                {


                for(x=2;x<=pierwiastek;x++)
                {
                    if(liczba % x == 0)
                        {
                            licznik++;
                        }

                }
                if (licznik==0)
                {
                    printf("TAK\n");
                }
                else
                {
                    printf("NIE\n");
                }

            }
            }


    return 0;
    }
