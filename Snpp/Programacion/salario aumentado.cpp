#include <iostream>
#include <conio.h>
using namespace std;

main()
{
	double salario, incremento, total_aumentado;
	
	cout<<"Introduce el salario actual"<<endl;
	cin>>salario;
	incremento = salario* 0.3;
	total_aumentado = salario + incremento;
	
	cout<<"tu salario con el aumento es de: "<<total_aumentado;
	
}
