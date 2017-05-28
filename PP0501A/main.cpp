/* dla nowszych kompilatorów */
#define ANSI
#ifdef ANSI
#include <iostream>
#include <cstring>
using namespace std;
#endif

/*Oblicza największy wspólny dzilenik liczb a i b*/
int nwd(int a, int b);


int main(){
  int t,a,b;
  int i = 0;
  int tablica[1000];

  cin >> t; /* wczytaj liczbę testów */
  int wynik = t;
  while(t)
  { 
    
    cin >> a;
    cin >> b;
    tablica[i] = nwd(a,b);
	
    

    t--;
    i++; 
  } 
  
  for (int j = 0; j < wynik ; j++)
    {
	cout << tablica[j] << endl;
    }
    
  return 0;
}


 int nwd(int a, int b)
    {
	while (a!=b)
	    {
		if (a>b)
		    {
    		    a-=b;
		    }    
		else
		    {
    		    b-=a;
		    }
	    }
	
    } 
    