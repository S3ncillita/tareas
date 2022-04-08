Algoritmo descuentoss
	Escribir "Introduzca el nombre del producto"
	leer nomb
	Escribir "introduzca la clave de descuento"
	Escribir "1 es 10% de descuento"
	Escribir "2 es 20% descuento"
	Leer cve
	Escribir "Precio original del producto"
	Leer prec_orig
	si cve=01 Entonces
		prec_desc = prec_orig - prec_orig * 0.10
	SiNo
		prec_desc = prec_orig - prec_orig * 0.20
	FinSi
	Escribir "Producto: ",nomb," ","Precio original: ",prec_orig," ","Descuento: ",prec_desc
	
FinAlgoritmo
