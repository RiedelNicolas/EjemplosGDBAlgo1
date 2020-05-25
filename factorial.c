#include <stdio.h>



unsigned int factorial(int n);


int main(){
	int n = 0;
	unsigned int resultado = 0;
	printf("\nIngrese el numero del que desea calcular el factorial\n");
	scanf("%i",&n);

	resultado = factorial(n);

	printf("El resultado es %u \n",resultado);

	return 0;
}


unsigned int factorial(int n){
	unsigned int resultado = 1;

    while(n!=0){
    	n--;
        resultado*=n;
    }
    return resultado;
}
