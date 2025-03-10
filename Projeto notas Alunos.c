#include <stdio.h>

int main(){

float nota1, nota2, nota3;
float media;

printf("*** Programa de Cálculo de Média *** \n");

printf("Digite Sua Primeira Nota: \n");
scanf("%f" , &nota1);

printf("Digite Sua Segunda Nota: \n");
scanf("%f" , &nota2);

printf("Digite Sua Terceira Nota: \n");
scanf("%f" , &nota3);

media = (float) (nota1 + nota2 + nota3) / 3;

printf("A Média é: %.1f", media);

printf("\n");




return 0;

}