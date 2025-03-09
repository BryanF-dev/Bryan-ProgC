#include <stdio.h>

int main(){

/*
Incremento (++)
Pré-Incremento ++a
Pós-Incremento a++
Decremento(--)
Pré-Decremento --a
Pós-Decremento a--

*/

int numero1 = 1 , resultado;
printf("Antes do Incremento: %d \n" , numero1);

//Numero 1 = Numero 1 + 1
resultado = numero1++;
//printf("Após Incremento: %d \n" , numero1);
printf("Pós-Decremento: - Numero 1: %d  - Resultado %d \n" , numero1, resultado);

resultado = ++numero1;
//printf("Pré Incremento: %d \n" , numero1);
printf("Pré-Incremento: - Numero 1: %d  - Resultado %d \n" , numero1, resultado);


resultado = numero1--;
printf("Pós-Decremento: - Numero 1: %d  - Resultado %d \n" , numero1, resultado);


resultado = --numero1;
printf("Pré-Incremento: - Numero 1: %d  - Resultado %d \n" , numero1, resultado);






}