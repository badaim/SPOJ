#include<stdio.h>
#include<stdlib.h>
int main()
{
    char c;
    int i;
    char *v;
    v = malloc(100 * sizeof(char));


    while(scanf("%c %s ", &c,v)!= EOF)

    {
        for(i=0;v[i]!=0;i++)
        {
            
            if(v[i]!=c)
            {
                printf("%c",v[i]);
            }
            
            
        }
        printf("\n");

    }
    return 0;
}
