#include<stdio.h>
int main(void)
{
    char operacja;
    int a,b;
    int rejestr[10] = {0,0,0,0,0,0,0,0,0,0};
    while(scanf("%c %d %d ", &operacja,&a,&b)!=EOF)
    {

      if (operacja=='z')
      {
          rejestr[a] = b;
      }
      if (operacja=='+')
      {
          printf("%d\n",rejestr[a]+rejestr[b]);
      }
      else if (operacja=='-')
      {
          printf("%d\n",rejestr[a]-rejestr[b]);
      }
      else if (operacja=='/')
      {
          printf("%d\n",(rejestr[a]/rejestr[b]));
      }
      else if (operacja=='*')
      {
          printf("%d\n",rejestr[a]*rejestr[b]);
      }
      else if (operacja=='%')
      {
          printf("%d\n",rejestr[a]%rejestr[b]);
      }


    }
    return 0;
}
