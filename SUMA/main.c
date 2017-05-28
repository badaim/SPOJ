#include<stdio.h>
void main()
{
    int liczba,i,suma;
    suma=0;
    i=0;
    scanf("%d",&i);
    printf("%d\n",i);
    while(scanf("%d",&liczba)!=EOF)
    {
        suma = suma + i + liczba;
        printf("%d\n",suma);
        i=0;
    }

}
