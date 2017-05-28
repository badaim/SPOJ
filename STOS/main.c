#include<stdio.h>


int main()
{
    int tab[10];
    int i = 0;
    int c;
    while((c=getchar())!=EOF)
    {
        if (c=='+')
        {
            if (i <= 9)
            {
                scanf("%d",&tab[i]);
                printf(":)\n");
                i++;
            }
            else
            {
                printf(":(\n");
            }
        }
        else if (c=='-')
        {
    	
            if (i > 0)
            {
                printf("%d\n",tab[i-1]);
                i--;
            }
            else
            {
                printf(":(\n");
            }
            
        }
        
        
    }
    return 0;
}
