#include <stdio.h>

typedef struct colaborador {
    char pelo;
    int altura;
} colaborador_t;

void imprimir_colab(colaborador_t colab) {
    printf("el colab tiene el pelo: %c \n", colab.pelo);
    printf("y mide : %i centimetros \n",colab.altura);
}

int main() {
    colaborador_t charly;
    charly.pelo = 'r';
    charly.altura = 120;
    imprimir_colab(charly);
}