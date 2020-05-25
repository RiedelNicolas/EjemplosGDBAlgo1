#include <stdio.h>
  

int division_entera(int dividendo, int divisor); 

int main(){

   int dividendo = 9;
   int divisor = 3;
   int resultado = 0;

   resultado = division_entera(dividendo, divisor);

   printf("\nEl resultado de la division entre %i y %i es %i \n"
   , dividendo, divisor, resultado); 
   
   // Ahora otra cuenta.
   dividendo = 1;
   divisor = 0; 

   resultado = division_entera(dividendo, divisor);

   printf("\nEl resultado de la division entre %i y %i es %i \n"
   , dividendo, divisor, resultado); 

   return 0; 
}


int division_entera(int dividendo, int divisor){ 
   return (dividendo/divisor); 
}   