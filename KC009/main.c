#include<stdio.h>
int main()
{
    char tab[1010];
    int i;
    while (scanf("%s",tab)!=EOF)
    {

     
     i = strlen(tab);
        while(i--)
        {
            printf("%c",tab[i]);
        }
    printf("\n");
    }
    return 0;
}

