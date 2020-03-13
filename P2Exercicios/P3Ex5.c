#include <stdio.h>

void main(){
    int valor, c50, c5, c1, aux;

    printf("Digite um valor inteiro que representa um valor em reais: R$ ");
    scanf("%i", &valor);

    aux = valor;

    c50 = aux / 50;
    aux %= 50;

    c5 = aux / 5;
    aux %= 5;

    c1 = aux / 1;

    printf("\nR$ %i.00 = %i cedulas de 50, %i cedulas de 5 e %i cedulas de 1.", valor, c50, c5, c1);
}