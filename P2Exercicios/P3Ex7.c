#include <stdio.h>

void main(){
    int n, aux;
    printf("Digite um numero inteiro: ");
    scanf("%i", &n);

    aux = n;
    aux %= 10;
    aux = abs(aux); // Caso o numero seja negativo

    printf("\nO ultimo digito de %i eh %i", n, aux);
}