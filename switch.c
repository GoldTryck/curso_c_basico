/*
Escribe un programa en C que presente al usuario un menú de operaciones matemáticas simples
(suma, resta, multiplicación y división). El programa debe solicitar al usuario seleccionar
una operación, ingresar dos números y realizar la operación elegida, mostrando el resultado.
*/
#include <stdio.h>

int main(){
    int opcion;
    float num1, num2, res;

    printf("Seleccione una operacion a realizar: \n");
    printf("1) Suma\n2) Resta\n3) Multiplicacion\n4) Division\n");
    printf("> ");
    scanf("%d", &opcion);

    printf("Ingrese el primer valor:\n> ");
    scanf("%f", &num1);
    printf("Ingrese el segundo valor:\n> ");
    scanf("%f", &num2);

    switch (opcion)
    {
    case 1:
        res = num1 + num2;
        break;
    case 2:
        res = num1 - num2;
        break;
    case 3:
        res = num1 * num2;
    case 4:
        if(num2 == 0){
            printf("Error. No se puede dividir por 0.\n");
        }else{
            res = num1 / num2;
        }
        break;
    default:
        printf("Error. Opcion no valida. Verifique su seleccion.\n");
        return 0;
    }

    printf("Resultado: %.2f\n", res);
    return 0;
}