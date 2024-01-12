#include <stdio.h>
#define LEN 10

void pedirTelefono(char telefono[])
{
    printf("Ingresa tu numero de telefono: ");
    scanf("%s", telefono);
}

void imprimirTelefono(char telefono[])
{
    printf("Tu numero es: %s\n", telefono);
}
int main()
{
    char telefono[LEN];

    pedirTelefono(telefono);
    imprimirTelefono(telefono);

    return 0;
}
