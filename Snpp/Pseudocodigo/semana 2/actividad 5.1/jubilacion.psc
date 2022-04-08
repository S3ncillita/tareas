Algoritmo jubilacion
	leer edad,ant
	si edad >=60 y ant< 25 Entonces
		Escribir "La jubilacion es por edad"
	SiNo
		si edad >=60 y ant > 25 Entonces
			Escribir "La jubilacion es por edad adulta"
		SiNo
			si edad < 60 y ant > 25 Entonces
				Escribir "la jubilacion es por antiguedad joven"
			SiNo
				Escribir "no tiene que jubilarse"
			FinSi
		FinSi
		
	FinSi
	
FinAlgoritmo
