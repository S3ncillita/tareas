Algoritmo descuento
	leer tc, bs
	si bs = "blanca" Entonces
		d=0
		si bs = "verde" Entonces
			d=tc*010
		SiNo
			si bs ="amarilla" Entonces
				d=tc*0.25
			SiNo
				si bs = "azul" Entonces
					d =tc* 0.50
				SiNo
					d=tc
				FinSi
				Escribir  d
			FinSi
		FinSi
	FinSi
	
FinAlgoritmo
