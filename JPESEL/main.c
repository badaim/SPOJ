int main(void)
{
    int t;
    int pesel_razy;
    char pesel[12];
    scanf("%d",&t);
    while(t--)
    {
       scanf("%s",pesel);
       pesel_razy = (pesel[0]-'0') + (pesel[1]-'0')*3 + (pesel[2]-'0')*7 + (pesel[3]-'0')*9 + (pesel[4]-'0') + (pesel[5]-'0')*3 + (pesel[6]-'0')*7 + (pesel[7]-'0')*9 + (pesel[8]-'0') + (pesel[9]-'0')*3 + (pesel[10]-'0');
       if (pesel_razy > 0)
       {
            if(pesel_razy % 10)
            {
                printf("N\n");
            }
            else
            {
                printf("D\n");
            }
       }
       else
       {
           printf("N\n");
       }
    }
    return 0;
}
