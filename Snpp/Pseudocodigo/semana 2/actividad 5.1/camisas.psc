Algoritmo camisas
	Leer num_camisas,prec
	tot_comp = num_camisas * prec
	si num_camisas >= 3 Entonces
		tot_pag = tot_comp - top_comp * 0.20
		sino
		tot_pag = tot_comp - top_comp * 0.10
			
	FinSi
		Escribir tot_pag
		
FinAlgoritmo
