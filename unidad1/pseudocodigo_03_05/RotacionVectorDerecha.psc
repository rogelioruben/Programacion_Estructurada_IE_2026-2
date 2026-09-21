Algoritmo RotacionVectorDerecha
    Definir n, i Como Entero
    Definir aux Como Real
    Dimension vector[100]  // Puedes cambiar el tamaño máximo
    
    // 1. Pedir el tamaño del vector
    Escribir "Ingrese la cantidad de elementos del vector: "
    Leer n
    
    // 2. Llenar el vector
    Para i <- 1 Hasta n Con Paso 1 Hacer
        Escribir "Ingrese el elemento ", i, ": "
        Leer vector[i]
    FinPara
    
    // 3. Mostrar vector original
    Escribir ""
    Escribir "Vector original:"
    Para i <- 1 Hasta n Con Paso 1 Hacer
        Escribir Sin Saltar vector[i], " "
    FinPara
    Escribir ""
    
    // 4. ROTACIÓN HACIA LA DERECHA
    aux <- vector[n]          // Guardamos el último elemento
    
    Para i <- n Hasta 2 Con Paso -1 Hacer
        vector[i] <- vector[i-1]   // Movemos cada elemento una posición a la derecha
    FinPara
    
    vector[1] <- aux          // El último elemento pasa a la primera posición
    
    // 5. Mostrar vector rotado
    Escribir ""
    Escribir "Vector después de rotar a la derecha:"
    Para i <- 1 Hasta n Con Paso 1 Hacer
        Escribir Sin Saltar vector[i], " "
    FinPara
    Escribir ""
FinAlgoritmo