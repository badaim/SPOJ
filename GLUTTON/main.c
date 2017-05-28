#include<math.h>
#define DOBA 86400

int main(void)
{
   int t,liczba_obzartuchow,liczba_ciastek_pud;
   int i;
   int zzarte_ciastka = 0;
   int sekundy[10000];
   scanf("%d",&t);
   while(t--)
   {
       scanf("%d %d",&liczba_obzartuchow,&liczba_ciastek_pud);
       for (i=0;i<liczba_obzartuchow;i++)
       {
           scanf("%d",&sekundy[i]);
           zzarte_ciastka = zzarte_ciastka + (DOBA/sekundy[i]);
       }
       printf("%.f\n",ceil(((float)zzarte_ciastka/(float)liczba_ciastek_pud)));
       zzarte_ciastka = 0;
   }

return 0;
}
