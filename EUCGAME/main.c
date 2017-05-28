#include<stdio.h>
int main(void)
{
  int liczba_partii,a,b;
  scanf("%d",&liczba_partii);
  while(liczba_partii--)
    {
      scanf("%d %d",&a,&b);
      while(a!=b)
      {
          if (a > b)
            {
                a = a - b;
            }
          else
            {
                b = b - a;
            }
      }
      printf("%d\n",a+b);

    }
 return 0;
}
