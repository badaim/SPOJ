#include <stdio.h>

int magic(int n,int x,int y)
{

    int i=1;
    while(i<=n)
    {
        if(i%x==0)
        {
            if(i%y!=0)
            {
                printf("%d ",i);
                i++;
            }
            else
            {
                i++;
            }
        }
        else
        {
            i++;
        }
    }
    
    
    return 0;
}

int main(int argc, char **argv)
{
    int n,x,y,liczba_testow;
    
    scanf("%d",&liczba_testow);
    
    while(liczba_testow--)
    {
        scanf("%d %d %d",&n,&x,&y);
        magic(n,x,y);
    }
    
}
