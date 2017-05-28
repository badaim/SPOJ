#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    
    int i,licznik,j;
    char v[1000];
    while(fgets(v,sizeof(v),stdin)!= '\0')

    {
        for(i=0;v[i]!='\0';i++)
        {

            if(isspace(v[i]))
            {
                if (v[i]=='\n')
                {
                    
                    printf("\n");
                                        
                }
                else
                {
                    licznik=1;
                    j = i;
                    while(isspace(v[j+1]))
                        {
                            licznik++;
                            j++;
                        }
                    printf("%c",toupper(v[i+licznik]));
                    i = i + licznik;
                }
            }
            
            else
            {
                printf("%c",v[i]);
            }


        }
        

    }
    return 0;
}

