#include<stdio.h>
#include<signal.h>

int main()
{
   raise(SIGALRM);
   return 0;
}
