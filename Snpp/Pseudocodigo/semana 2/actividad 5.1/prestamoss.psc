Algoritmo prestamoss
	
	Leer  costopza,numpza
	totcomp = costopza*numpza
	si totcomp > 500000 Entonces
		cantinv = totcomp * 0.55
		prestamo =  totcomp * 0.30
		credito = totcomp * 0.15
	SiNo
		cantinv = totcomp *0.70
		credito = totcomp * 0.30
		prestamo = 0
		
	FinSi
	int = credito *0.20
	Escribir cantinv," ",prestamo," ",credito," ",int
FinAlgoritmo
