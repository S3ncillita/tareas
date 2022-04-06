import random
import math
num1 = 45;
num2 = 5;
name = input("Como te llamas? ");
edad = input("Cuantos años tienes? ");
#Agregar la función upper() para mostrar el nombre en Mayúsculas#
print ("Hola", name.upper());
print ("**************************")
#agregar la función format() para mostrar el saludo mássu nombre y su edad(tipo entero)#
print ("Hola", name.upper(),"tienes",format(edad),"años de edad");
print ("**************************")
#Escriba un programa que genere un rango entre 0 y 10 y muestre el resultado en pantalla.#
print(random.randrange(0,10));
print ("**************************")
#Declara dos variables numéricas (con el valor que desees), muestra por consola la suma,
#  resta, multiplicación, división y módulo (resto de la división)#

#suma#
suma = num1 + num2;
print(suma);
print ("**************************")
#resta#
resta = num1- num2;
print(resta);
print ("**************************")
#multiplicacion#
multiplicacion = num1* num2;
print(multiplicacion);
print ("**************************")
#division#
divison = num1 / num2;
print(divison);
print ("**************************")
#modulo#
modulo = num1 % num2;
print(modulo);
print ("**************************")

#Escriba un programa que reciba como entrada el radio de un círculo y entregue como 
# salida su perímetro y su área.#
pi = math.pi;# valor de PI 3,14
print(pi);
print ("**************************")
radio = float (input("Introduce el radio del circulo \n"));
Perimetro = (pi * radio);

print("El perimetro del circulo es: ", Perimetro);
Area = pi * (radio * radio);
print("El area del circulo es: ", Area);
print ("**************************")

#Escriba un programa que convierta de centímetros a pulgadas.
#  Una pulgada es igual a 2.54 centímetros.
pulg = int(input("Introduce el centimetro que desea pasar a pulgada: "))
resultado = (pulg / 2.54);
print("El numero ",pulg,"convertido a centimentros es: ",resultado,"cm")
print ("**************************")