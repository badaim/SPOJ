#include<stdio.h>
#include<ctype.h>
int main()
{
    int c;
    while((c=getchar())!=EOF)
    {
       if(c=='<')
       {
        putchar(c);
       while((c=getchar())!='>')
       {
            if(isupper(c))
            {
                putchar(c);
            }
            else
            {
                printf("%c",toupper(c));
            }
       }
       putchar(c);
       }

       else
       {
           putchar(c);
       }


    }

    return 0;
}
