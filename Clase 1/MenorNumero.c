#include <stdio.h>

//Menor numero en un Array

int main()
{
    int array[] = {1,2,3,4,5,6,7,8,9};

    int aux = 0;

    for(int i = 0; i< sizeof(array)/sizeof(int); i++){

        aux = aux + array[i];
		
        if(aux < array[i]){

            aux = array[i];
        }
    }

    printf("Menor valor %d ", aux);
}