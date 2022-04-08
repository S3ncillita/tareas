# include <conio.h>
 # include <iostream>
  using namespace std;
   int main ()
    { float n,i,f; 
	cout <<"Ingrese el valor de n" <<endl; 
	cin >> n;
	 if(n<0) 
	 { cout<<"No se cómo calcular el factorial de un negativo";
	  } 
	  else
	   { f=1; 
	   for (i=1; i<=n; i++)
	    { f=f*i;
		}
		 cout <<"El resultado es " <<f;
		  }
		   getch ();
		    return 0;
	 }