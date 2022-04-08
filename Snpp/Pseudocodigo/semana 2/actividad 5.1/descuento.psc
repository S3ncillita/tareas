Algoritmo descuento
	Escribir "Introduzca el precio de la compra"
	Leer compra
	si compra > 1000 Entonces
		desc = compra * 0.20
	SiNo
		desc = 0
	FinSi
	tot_pag = compra - desc
	Escribir tot_pag
	
FinAlgoritmo
