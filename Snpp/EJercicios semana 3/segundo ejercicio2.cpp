#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;


main ()
{
	int n,sobrante;
	
	cout << "Introduzca el precio del producto"<<endl;
	cin >> n;
	sobrante = n * 0.16;
	
	cout <<"La diferencia es de: "<< sobrante;
	
	return 0;
	
	
	
}