Algoritmo ganacia_interes
	Escribir "Ingrese el monto de su capital"
	Leer cap
	Escribir "Ingrese porcentaje de interes en decimales"
	Leer p_int
	int = cap * p_int
	si int > 7000 Entonces
		capf = cap + int
	FinSi
		Escribir  "Su capital final es: ",capf
FinAlgoritmo
