#include <stdio.h>

int main() {
    int x = 5;
    int y = 0;
    
    int resultado = x / y;  // Error semántico: división por cero
    printf("El resultado es: %d\n", resultado);
    return 0;
}
