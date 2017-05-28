#include <stdio.h>

int main()
{
    char tab[2099];
    int l_testy,x,liczba_liter,i;
    scanf("%d",&l_testy);
    while(l_testy--)
    {
        liczba_liter = 0;
        x = 0;
        scanf("%s",tab);
        while(tab[x]!= '\0')
        {
            liczba_liter++;
            x++;
        }
        for(i=0;i<liczba_liter/2;i++)
        {
            printf("%c",tab[i]);
        }
        printf("\n");

    }

    return 0;
}
