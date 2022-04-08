#include<conio.h>
 #include<iostream>
  using namespace std;
  main() { //variables 
  int n,contador=1;
   float x,mayor; //Instrucciones 
   do{
   
  cout<<"¿Cuantos números desea ingresar para encontrar el mayor?: ";
  	cin>>n;
  	if(n<0)
	  {
	  	cout<<"Debe ser un numero positivo,vuelva a introducir"<<endl;
	  }
	}while(n<0);
   cout<<"Numero 1: ";
    cin>>x;
	 mayor=x;
	
	 while(contador<n)
	  { contador++; 
	 cout<<"Numero "<<contador<<": ";
	  cin>>x; 
	  if(x>mayor)
	   mayor=x;
	 
	    
		 } 
		 cout<<"El mayor es "<<mayor;
		
		  
		 getch();
		  return(0);
	}

	
	
	
	
	