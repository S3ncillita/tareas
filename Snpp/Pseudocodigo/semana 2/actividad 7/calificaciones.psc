Algoritmo calificaciones
	sum = 0
	baja = 9999
	para a = 1 hasta 40
		leer calif
		sum = sum +calif
		si calif < baja Entonces
			baja = calif
		FinSi
	FinPara
	media = sum / 2
	Escribir media," ",baja
FinAlgoritmo
