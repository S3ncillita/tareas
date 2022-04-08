Algoritmo cantidad
	Leer ht,pph
	si ht <= 40 Entonces
		tp = ht * 40
	SiNo
		he= ht - 40
		si he <= 8 Entonces
			pe = he * pph * 2
			pt = (he - 8) * pph * 3
			pe = pd + pt
		FinSi
		tp = 40 * pph + pe
	FinSi
	Escribir tp
FinAlgoritmo
