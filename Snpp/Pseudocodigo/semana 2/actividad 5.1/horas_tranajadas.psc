Algoritmo horas_tranajadas
	Escribir "Introduzca las las horas trabajas del trabajador"
	Leer  ht
	si ht > 40 Entonces
		he = ht - 40
		Escribir he
		ss = he *20+40*16
		
	SiNo
		ss=ht*16
	FinSi
	Escribir ss
FinAlgoritmo
