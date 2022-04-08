Algoritmo calorias
	Escribir "Introuzca en que reposo se encuentra"
	Leer act
	Escribir "Introduzca en que tiempo que  estuvo"
	Leer  tiemp
	si act="dormido" Entonces
		cg = 1.08 * tiemp
	SiNo
		cg = 1.66 * tiemp
	FinSi
	Escribir cg
FinAlgoritmo
