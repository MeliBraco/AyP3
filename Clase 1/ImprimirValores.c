#include <stdio.h>

//Imprimir valor ingresados por teclado

int main()
{
	char nombre[100];

    int edad;

    printf("Ingrese su nombre:");

    scanf("%s", nombre);

    printf("Ingrese su edad:");

    scanf("%d", &edad);

    printf("Su nombre es %s  y su edad es %d", nombre, edad);

}