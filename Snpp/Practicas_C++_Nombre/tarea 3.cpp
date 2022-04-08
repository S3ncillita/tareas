#include<conio.h>
#include<iostream>
#include<stdio.h>
#include<iomanip>

using namespace std;
int main()
{
	int numero1,numero2,numero3;
	
	cout<<setw(50)<<"Introduce los 3(tres) numeros"<<endl;
	cin>>numero1;
	cin>>numero2;
	cin>>numero3;
	
	if(numero1>numero2 && numero1>numero3) // verificando si el numero1 es mayor a numero2 y numero3
	{
		cout<<"El primer mayor introducido es:"<<endl<<numero1;
	}
	if(numero2>numero1 && numero2>numero3)// verificando si el numero2 es mayor a numero1 y numero3
	{
		cout<<"El segundo mayor introducido es: "<<endl<<numero2;	
	}
	if(numero3>numero1 && numero3>numero2)// verificando si el numero3 es mayor a numero1 y numero2
	{
		cout<<"El tercer mayor introducido es: "<<endl<<numero3;
	}
	getch();
	return 0;
}