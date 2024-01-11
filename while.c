/*
Escribe un programa en C que solicite al usuario ingresar números positivos continuamente
hasta que ingrese un número negativo. El programa debe calcular la suma de todos los números
positivos ingresados y mostrar el resultado al final.
*/
#include <stdio.h>

int main(){
    int numero = 0, suma= 0;

    while(numero >= 0){
        printf("Ingrese un numero: ");
        scanf("%d", &numero);

        if(numero < 0 ) break;
        else suma += numero;
    }
    printf("Resultado: %d\n", suma);
    return 0;
}