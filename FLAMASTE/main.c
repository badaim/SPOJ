#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
        int liczba_testow,k;
        int dlugosc_ciagu;
        char znaki[201];
        
        scanf("%d", &liczba_testow);
        
        while (liczba_testow--)
        {
            scanf("%s",znaki);
            int i=0;
            int j;
            int liczba_powtorzen = 0;
            dlugosc_ciagu = strlen(znaki);
            printf("%c",znaki[i]);
            while (i < dlugosc_ciagu-1)
            {
                j=i+1;
              //printf("%c",znaki[i]);
                
                if (znaki[i]==znaki[j])
                {
                    
                    while(znaki[i]==znaki[j])
                        {
                            liczba_powtorzen++;
                            
                            j++;
                        }
                    if(liczba_powtorzen < 2)
                        {
                            for (k=0;k<liczba_powtorzen;k++)
                            {
                                printf("%c",znaki[i]);
                            }
                        
                        i = i + liczba_powtorzen;
                        liczba_powtorzen = 0;
                
                        }
                    else
                        {
                        printf("%d",liczba_powtorzen+1);
                        i = i + liczba_powtorzen;
                        liczba_powtorzen = 0;
                        }
                }
                else
                {
                    printf("%c",znaki[j]);
                    i = i + 1;
                    
                }
            }
            printf("\n");
            
            
            
        }
    
    return 0;
}
