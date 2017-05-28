#include<stdio.h>
int main(void)
{
    char operacja;
    int a,b;
    while(scanf("%c %d %d ", &operacja,&a,&b)!=EOF)
    {

      if (operacja=='+')
      {
          printf("%d\n",a+b);
          
      }
      else if (operacja=='-')
      {
          printf("%d\n",a-b);
          
          
      }
      else if (operacja=='/')
      {
          printf("%d\n",a/b);
          
      }
      else if (operacja=='*')
      {
          printf("%d\n",a*b);
          
      }
      else if (operacja=='%')
      {
          printf("%d\n",a%b);
          
      }


    }
    return 0;
}
