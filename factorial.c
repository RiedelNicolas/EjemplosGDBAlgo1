#include <stdio.h>

// Declaracion de firmas.

/*
*  Recibe un entero positivo, y devuelve su factorial.
*/
unsigned int calcular_factorial(unsigned int numero_ingresado);
/*
* Solicita al usuario el ingreso de un numero por pantalla.
*/
void solicitar_datos();
/*
* Muestra el entero recibido por pantalla.
*/
void mostrar_resultado(unsigned int resultado);

int main() {
	unsigned int numero_ingresado = 0;
	unsigned int resultado = 0;
	scanf("%u", &numero_ingresado);
	resultado = calcular_factorial(numero_ingresado);
	return 0;
}

void solicitar_datos () {
	printf("\nIngrese el numero del que desea calcular el factorial\n");
}

void mostrar_resultado(unsigned int resultado) {
	printf("El resultado es %u \n",resultado);	
}

unsigned int calcular_factorial(unsigned int numero_ingresado){
	unsigned int resultado = 1;

    while(numero_ingresado != 0){
    	numero_ingresado--;
        resultado*=numero_ingresado;
    }

    return resultado;
}
