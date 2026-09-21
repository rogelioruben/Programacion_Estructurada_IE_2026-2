Algoritmo TablaMultiplicarInversa
    Definir numero, i Como Entero
    Dimension resultados[10]
    
    // 1. Pedir el número
    Escribir "Ingrese un número para generar su tabla de multiplicar: "
    Leer numero
    
    // 2. Generar la tabla y guardar los resultados en el vector
    Para i <- 1 Hasta 10 Con Paso 1 Hacer
        resultados[i] <- numero * i
    FinPara
    
    // 3. Mostrar la tabla normal (opcional, para verificar)
    Escribir ""
    Escribir "Tabla de multiplicar del ", numero, ":"
    Para i <- 1 Hasta 10 Con Paso 1 Hacer
        Escribir numero, " x ", i, " = ", resultados[i]
    FinPara
    
    // 4. Imprimir el vector en orden inverso (del índice 10 al 1)
    Escribir ""
    Escribir "Resultados en orden inverso (del índice 10 al 1):"
    Para i <- 10 Hasta 1 Con Paso -1 Hacer
        Escribir "Índice ", i, ": ", resultados[i]
    FinPara
    
FinAlgoritmo