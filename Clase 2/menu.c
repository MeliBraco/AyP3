#include <stdio.h>
#include "default.h"

int main(){

    Resultado();

    return 0;
}

int Resultado(){

    int valor = Opciones();

    menu(valor);

    return 0;
}

void menu(int valor){

    int numero;

    switch(valor)
    {
        case 1:

            printf("Ingrese un numero: \n");

            scanf("%d",&numero);

            calcularPar(numero);

            Resultado();

        case 2:

            ASCII();

            Resultado();

        case 3:

            mayorValor();

            Resultado();

        default:

            return 0;
    }
}

int  Opciones(){

    int value;

    printf("\n 1- CalcularPar"
           "\n 2- ASCII "
           "\n 3- MayorValor "
           "\n 4- Salir \n "
           "\n Ingrese una Opcion: ");

    scanf("%d",&value);

    return value;
}
