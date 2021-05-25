#include <string.h>
#include <ctype.h>

void mayusculizar(char palabra []);

int main(){
    char nombre [50];
    strcpy(nombre,"nicolas");
    mayusculizar(nombre);
    return 0;
}

void mayusculizar(char palabra []) {

    if (palabra[0] =='\0') return;

    int i = 0;
    while (palabra[i] != '\0'){
        palabra[i] = toupper(palabra[i]);
        i++;
    }
}
