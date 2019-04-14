#include <stdio.h>

//Promedio

int main()
{
	int array[] = {7,8,9};

    int aux = 0;

    double total;

    for(int i = 0; i< sizeof(array)/sizeof(int); i++){

        aux += array[i];
    }

    total = aux/(sizeof(array)/sizeof(int));

    printf("El promedio es %f ", total);
}