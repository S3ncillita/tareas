/*Ejemplo 4, funciones combinadas, una que devuelve un dato y otra que no*/ 
#include <stdio.h> 
#include <conio.h>
 #include <stdlib.h> 
 void calculodatos(int numero); /*declaración de la función que no devuelve valor*/ 
 double factorial(int dato); /*declaración de la función que devuelve un valor*/
  main() { 
system("COLOR f1"); /* system pertenece a la libreria stdlib*/ int numero; 
char respuesta; 
printf("\n\n\nINICIO DEL PROGRAMA\n\n\n"); 
printf("\n\nEl programa te calcula el valor del numero e."); 
do { 
do { 
printf("\n\nIntroduzca un numero de terminos de la serie: ");
 scanf("%d",&numero); 
} while (numero<0);
 calculodatos(numero); 
printf("\n\nDesea introducir mas datos (s/n)\?\n\n"); 
respuesta=getch(); 
system("cls"); /* system pertenece a al libreria stdlib*/ 
} while (respuesta=='s' || respuesta=='S'); printf("\n\n\n\t\t************************"); printf("\n\t\t*** FIN DEL PROGRAMA ***"); printf("\n\t\t************************\n\n\n"); getch(); } 
void calculodatos(int numero) /*definicion de la funcion que no devuelve un valor */ 
{ 
int i; 
double e=1.; 
for (i=1;i<=numero;i++) 
{ 
e=e+1./factorial(i); 
} 
printf("\n\nEl valor de e para %d terminos es %f.",numero,e); 
} 
double factorial(int dato) /*definicion de la funcion que devuelve un valor */ 
{ 
int i; 
double resultado=1; for (i=dato;i>0;i--) 
{ 
resultado=resultado*i; 
} 
return (resultado); /*valor devuelto*/ 
} 
