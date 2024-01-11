/*
Escribe un programa en C que solicite al usuario ingresar un número entero.
Utiliza el operador ternario para determinar si el número es positivo, negativo o igual a cero.
Imprime un mensaje correspondiente.
*/

#include <stdio.h>

int main(){
    int numero;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    (numero > 0) ? printf("El numero ingresado es mayor que cero.\n"):
    (numero < 0) ? printf("El numero ingresado es menor que cero.\n"):
    printf("El numero ingresado es igual que cero.\n");
    return 0;
}