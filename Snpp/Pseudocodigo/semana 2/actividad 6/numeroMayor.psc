Algoritmo numeroMayor
	Escribir "Ingrese tres numeros diferentes"
	Escribir "Ingrese el primer numero: "
	Leer num1
	Escribir "Ingrese el segundo numero: "
	leer num2
	Escribir "Ingrese el tercer numero: "
	leer num3
	si (num1>num2) y (num1>num3) Entonces
		mayor = num1
	SiNo
		si (num2>num1) y (num2>num3) Entonces
			mayor = num2
		SiNo
			mayor = num3
		FinSi
		Escribir "El mayor de los tres numeros ingresados es:" mayor
	FinSi

FinAlgoritmo
