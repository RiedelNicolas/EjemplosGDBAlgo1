#include <stdio.h>

#define MAX_VECTOR = 100


int auto_multiplicar(int vector[], unsigned tope){
	int acumulador = 0; 

	for (unsigned i = 0; i <= tope; i++){
		acumulador *= vector[i];
	}

	return acumulador;
}		




int main(){
	int vector [100];
	unsigned int tope;
	int resultado;

	printf("\ningrese el largo del vector\n");
	scanf(" %u", &tope);

	for (unsigned int i = 0; i < tope; i++){
		printf("\nIngrese el elemento numero %i\n", i+1);
		scanf(" %i", &(vector[i]) );
	}

	resultado = auto_multiplicar(vector, tope);
	printf("\n El resultado de la multiplicacion es %i \n ", resultado);

	return 0;
}