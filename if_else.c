/*
Escribe un programa en C que solicite al usuario ingresar un nombre de usuario y una contraseña.
El programa debe comparar la información ingresada con un nombre de usuario y una contraseña
predefinidos. Si la información coincide, el programa debe imprimir un mensaje de bienvenida; 
de lo contrario, debe mostrar un mensaje de error.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char usuario[] = "hector";
    char pass[] = "1234qwerty";
    char usuario_ingresado[40];
    char pass_ingresada[40];

    printf("Ingrese su nombre de usuario: ");
    scanf("%s", usuario_ingresado);
    printf("Ingrese su contrase%ca: ", 164);
    scanf("%s", pass_ingresada);

    if(strcmp(usuario,usuario_ingresado) == 0 && strcmp(pass, pass_ingresada) == 0){
        printf("Autenticaci%cn exitosa. Bienvenido %s.\n", 162,usuario_ingresado);
    }
    else{
        printf("Error de autenticaci%cn. Verifique sus crednciales.\n", 162);
    }
    return 0;
}