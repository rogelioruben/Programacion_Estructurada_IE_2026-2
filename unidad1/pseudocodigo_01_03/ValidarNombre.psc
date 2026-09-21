Algoritmo ValidarNombre
    Definir nombre Como Cadena
    Definir esValido Como Logico
    Definir i Como Entero
    Definir soloNumeros Como Logico
    
    Repetir
        Escribir "Ingrese su nombre: "
        Leer nombre
        
        // 1. Validar que no esté vacío (longitud mayor a 1)
        Si Longitud(nombre) <= 1 Entonces
            esValido <- Falso
            Escribir "Error: El nombre no puede estar en blanco."
        Sino
            // 2. Verificar si es solo números
            soloNumeros <- Verdadero
            Para i <- 1 Hasta Longitud(nombre) Con Paso 1 Hacer
                Si Subcadena(nombre, i, i) < "0" O Subcadena(nombre, i, i) > "9" Entonces
                    soloNumeros <- Falso
                FinSi
            FinPara
            
            Si soloNumeros = Verdadero Entonces
                esValido <- Falso
                Escribir "Error: El nombre no puede ser un número."
            Sino
                esValido <- Verdadero
            FinSi
        FinSi
        
    Hasta Que esValido = Verdadero
    
    Escribir "Nombre válido: ", nombre
FinAlgoritmo