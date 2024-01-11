/*
Escribe un programa en C que solicite al usuario ingresar un número entero positivo entre 1 y 50.
Utiliza un bucle do-while para contar y mostrar todos los números pares desde 2
hasta el número ingresado. Asegúrate de validar que el número ingresado sea positivo.
*/
#include <stdio.h>

int main(){
    int numero, contador = 2;
    do{
        printf("Ingrese un numero positivo entre 1 y 50: ");
        scanf("%d", &numero);
        if (0 < numero && numero <= 50 ) break;
        else printf("Error. Valor fuera de rango.\n");
    }while (1);
    
    printf("numeros pares [ ");
    do{
        printf("%d ", contador);
        contador += 2;
    }while (contador <= numero);

    //for(contador = 2; contador <= numero; contador+=2){
    //    printf("%d ", contador);
    //}
    printf("]");
    return 0;
}