#include<stdio.h>
int main()
{
    int d,n;
    scanf("%d",&d);
    while(d--)
    {
        scanf("%d",&n);
        if(n<=9)
        {
            if (n<4)
            {
                if (n==0 || n==1)
                    {
                        printf("0 1\n");
                    }
                else if(n==2)
                    {
                        printf("0 2\n");
                    }
                else if(n==3)
                    {
                        printf("0 6\n");
                    }
            }
            else
            {
                if (n==4)
                    {
                        printf("2 4\n");
                    }
                else if(n==5 || n==6 || n==8)
                    {
                        printf("2 0\n");
                    }
                else if(n==7)
                    {
                        printf("4 0\n");
                    }
                else if(n==9)
                    {
                        printf("8 0\n");
                    }
            }
        }
        else
        {
            printf("0 0\n");
        }
    }

    return 0;
}
