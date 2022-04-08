Algoritmo Calificacion
	Escribir "Ingrese las calificaciones de sus tres parciales,Ingrese tambien las calificaciones del examen final y la del trabajo final"
	Leer  c1,c2,c3,ef,tf
	prom = (c1+c2+c3) /3
	Pparciales = prom * 0.55
	PexFinal = ef * 0.30
	PTrafinal = tf * 0.15
	cf = Pparciales + PexFinal + PTrafinal 
	Escribir "La calificacion final es: ",cf
FinAlgoritmo
