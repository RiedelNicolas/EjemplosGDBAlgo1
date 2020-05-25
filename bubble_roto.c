
#include <stdio.h>


void bubble_sort(int *vec, size_t len){ 

	int aux;

	for (size_t i = 0; i < (len-1); i++){
	    for (size_t j = 0; j < (len-i-1); j++){
	    	if (vec[j] > vec[j+1]) {
	        // swap
	        aux      = vec[j];
	        vec[j+1]  = vec[j];
	        vec[j+1] = aux;
	      }
	    }
	}
}

int main(){

	int vector [10] = { 8, 7, 9, 5, 4 , 2, 3, 1, 0  };
	size_t tope =  9;

	printf("El arreglo sin ordenar tiene la forma: \n");

	for (size_t i = 0; i < tope; i++){
		printf("%i ",vector[i] );
	}

	bubble_sort(vector, tope);
	printf(" \nEl arreglo ordenado tiene la forma : \n");

	for (size_t i = 0; i < tope; i++){
		printf("%i ",vector[i] );
	}

	printf("\n");

	return 0;
}