#include <string.h>

int calcularPar(int value){

    if (value % 2 == 1){

        printf(" El numero ingresado es Impar \n");
    }
    else{

        printf(" El numero ingresado es Par \n");
    }
}

int ASCII()
{
    printf("Imprimir caracteres ASCII %d \n");

    for(int i = 0; i<128; i++){

        printf("%c \n", i);
    }

    return 0;
}

int mayorValor(){

    int array[] = {1,2,3,4,5,6,7,8,9};

    int aux = 0;

    for(int i = 0; i< sizeof(array)/sizeof(int); i++){

        aux = aux + array[i];

        if(aux > array[i]){

            aux = array[i];
        }
    }

    printf("El mayor valor de un array es: %d \n", aux);
}

typedef struct {

    char nombre[100];

    char apellido[100];

    int edad;

    unsigned int dni;

} Empleado;

void agregarEmpleado(){

    Empleado empleado;

    char nombreAux[100];

    char apellidoAux[100];

    int edad;

    int dni;

    printf("Ingresar Apellido:\n");

    scanf("%s", apellidoAux);

    printf("Ingresar Nombre:\n");

    scanf("%s", nombreAux);

    printf("Ingresar edad:\n");

    scanf("%d", &empleado.edad);

    printf("Ingresar dni:\n");

    scanf("%d", &empleado.dni);

    strcpy(empleado.apellido, apellidoAux);

    strcpy(empleado.nombre, nombreAux);

    printf("El Empleado fue ingresado correctamente:\n");
    printf("-Apellido = %s \n", empleado.apellido);
    printf("-Nombre = %s \n", empleado.nombre);
    printf("-Edad = %d \n", empleado.edad);
    printf("-DNI = %d \n", empleado.dni);

}