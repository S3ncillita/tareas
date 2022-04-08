Algoritmo PosiNEganeu
	cn = 0
	cp = 0
	cneg = 0
	para x = 1  hasta 20
		leer num
		si num = 0 Entonces
			cn = cn +1
		SiNo
			si num > 0 Entonces
				cp = cp + 1
			SiNo
				cneg = cneg +1
			FinSi
		FinSi
	FinPara
	Escribir cn," ",cp," ",cneg
	
FinAlgoritmo
