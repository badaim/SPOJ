#include<stdio.h>

int main(void)
{
    int ile;
    char litera;
    scanf("%d ",&ile);
    while(ile)
    {

    while((litera=getchar()) != '\n')
    {
        if (litera=='A' || litera=='B' || litera=='C')
        {
            printf("2");
        }
        else if (litera=='D' || litera=='E' || litera=='F')
        {
            printf("3");
        }
        else if (litera=='G' || litera=='H' || litera=='I')
        {
            printf("4");

        }
        else if (litera=='J' || litera=='K' || litera=='L')
        {
            printf("5");
        }
        else if (litera=='M' || litera=='N' || litera=='O')
        {
            printf("6");

        }
        else if (litera=='P' || litera=='Q' || litera=='R' || litera=='S')
        {
            printf("7");
        }
        else if (litera=='T' || litera=='U' || litera=='V')
        {
            printf("8");
        }
        else if (litera=='W' || litera=='X' || litera=='Y' || litera=='Z')
        {
            printf("9");
        }
        }
        printf("\n");
        ile--;
    }



    return 0;

}
