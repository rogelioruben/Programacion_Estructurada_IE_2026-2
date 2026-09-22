Algoritmo ejercicio28
	Definir n, i, picos, valles Como Entero
	Dimensionar senal(50)
	Escribir 'cantidad de muestras'
	Leer n
	Para i <- 1 Hasta n Hacer
        Repetir
            Escribir "Voltaje ", i, " (solo números positivos): "
            Leer voltaje
            
            Si voltaje < 0 Entonces
                Escribir "Error: No se permiten números negativos."
            FinSi
        Hasta Que voltaje >= 0
        
        senal[i] <- voltaje
	FinPara
	picos <- 0
	valles <- 0
	Para i<-1 Hasta n Hacer
		Si senal[i]>3.3 Entonces
			picos <- picos+1
		FinSi
		Si senal[i]<0.5 Entonces
			valles <- valles+1
		FinSi
		si senal[1]>12 Entonces
			Escribir "ERROR, excedio 12 v"
		FinSi
		si senal[i]<0
			escribir "no hay voltajes negativos"
		FinSi
	FinPara
	Si picos=0 Y valles=0 Entonces
		Escribir 'señal libre de ruido'
	SiNo
		Escribir 'señal con ruido'
	FinSi
FinAlgoritmo
