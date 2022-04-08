Algoritmo calcular
	leer sm,antig
	si antig < 1 Entonces
		util = sm * 0.05
	SiNo
		si (antig >= 1) y (antig < 2)  entonces
			util = sm * 0.07
		SiNo
			si (antig >= 2) y (antig < 5) Entonces
				util = sm * 0.10
			SiNo
				si (antig >= 5) y (antig < 10 ) Entonces
					util = sm * 0.15
				sino 
					util = sm * 0.20
				FinSi
			FinSi
			
			
		FinSi
		Escribir  util
	FinSi
FinAlgoritmo
