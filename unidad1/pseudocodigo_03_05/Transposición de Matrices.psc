Algoritmo RotacionVectorDerecha
    Definir n, i Como Entero
    Definir aux Como Real
    Dimension vector[100]  
    
   
    Escribir "Ingrese la cantidad de elementos del vector: "
    Leer n
    
  
    Para i <- 1 Hasta n Con Paso 1 Hacer
        Escribir "Ingrese el elemento ", i, ": "
        Leer vector[i]
    FinPara
    
   
    Escribir ""
    Escribir "Vector original:"
    Para i <- 1 Hasta n Con Paso 1 Hacer
        Escribir Sin Saltar vector[i], " "
    FinPara
    Escribir ""
    

    aux <- vector[n]        
    
    Para i <- n Hasta 2 Con Paso -1 Hacer
        vector[i] <- vector[i-1]   
    FinPara
    
    vector[1] <- aux          
    

    Escribir ""
    Escribir "Vector después de rotar a la derecha:"
    Para i <- 1 Hasta n Con Paso 1 Hacer
        Escribir Sin Saltar vector[i], " "
    FinPara
    Escribir ""
FinAlgoritmo