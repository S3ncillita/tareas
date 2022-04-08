Algoritmo llantera
	Escribir "Introduzca la cantidad de llantas que solicita el cliente"
	leer llantas
	si llantas < 5 Entonces
		precio = llantas * 300
		Escribir "Debe abonar por la cantidad de ", precio, " por las ",llantas," llantas"
	SiNo
		precio = llantas * 250
		Escribir "Debe abonar por la cantidad de ", precio, " por las ",llantas," llantas"
	FinSi
	
	
FinAlgoritmo
