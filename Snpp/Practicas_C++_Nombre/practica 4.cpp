# include <conio.h> 
# include <iostream> 
 
using namespace std; int main () 
 {      int a,b,c,d; 
    cout << "Ingrese el primer valor" <<endl; 
	    cin >> a;   
		  cout << "Ingrese el segundo valor" <<endl;    
		   cin >> b; 
    cout << "Ingrese el tercer valor" <<endl;  
	   cin >> c; 
	
	cout <<"Ingrese el cuarto varlo" <<endl;
		cin >> d;
     
    if ((a>=b) && (a>=c)&&(a>=d)) 
    { 
       cout <<"El mayor es el primer valor" <<endl << a; 
    }
    
      if ((b>=a) && (b>=c)&&(b>=d)) 
    { 
      cout <<"El mayor es el segundo valor" <<endl << b; 
    } 
    if ((c>=a) && (c>=b)&&(c>=d)) 
    { 
    cout <<"El mayor es el tercer valor" <<endl << c; 
     }   
	 if((d>=a) && (d>=b) && (d>=c));
	 {
	cout <<"El mayor es el cuarto valir"<<endl << d;
	 }
	 getch ();
	 return 0;
}