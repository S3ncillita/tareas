Algoritmo descuento
	Escribir "introduza el precio de las naranjas por kilos"
	leer precio
	Escribir "Introduzca la cantidad de kilos que compra el cliente"
	leer kilos
	Total = precio * kilos
	des = Total * 0.15
	des2 =  Total - des
	si  kilos >10 Entonces
		Escribir "El precio total es de: ",Total," y con el descuento a abonar es de: ",des2
		SiNo
			si clie < 10 Entonces
				Escribir "Abona el precio normal de: ",Total
			FinSi
		FinSi
	
FinAlgoritmo
