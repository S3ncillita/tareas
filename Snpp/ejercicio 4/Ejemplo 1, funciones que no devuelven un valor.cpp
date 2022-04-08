#include <stdio.h> 
#include <conio.h> 
#include <stdlib.h> 
void suma (int a, int b); /*declaración de la función suma*/
 void mayor (int a, int b); /*declaración de la función mayor, menor o iguales*/ 
 main() 
 { /*inicio del programa principal*/
 
 system("COLOR f1"); 
int a, b; 
printf("Ingrese el valor de A:\n"); scanf("%d", &a); 
printf("Ingrese el valor de B:\n"); 
scanf("%d", &b); 
suma(a,b); /*llamando cada una de las funciones*/ 
mayor(a,b); /*unicamente va el nombre de la funcion y de los parametros*/ getch(); 
} /*fin del programa principal*/ 
void suma(int a, int b) /*definición de la función suma*/ 
{ /*Abrimos llaves al inicio de la definición*/ 
int sum; /*Declaración de las variables locales*/ sum=a+b; 
printf("El valor de la suma es %d:\n\n", sum); 
} /*Fin de la función suma*/ 
void mayor(int a, int b) /*definición de la función mayor, menor o igual*/ 
{ if(a==b) 
printf("Los dos números son iguales\n\n"); else { if(a>b) 
printf("El valor de A es mayor que el de B\n\n"); else 
printf("El valor de B es mayor que el de A\n\n"); 
} 
} /*fin de la funcion mayor, menor o igual*/ 

