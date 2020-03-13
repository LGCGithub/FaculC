#include <stdio.h>
#include <math.h>

void main(){
    int n1, n2, n3, aux, maior;

    printf("Digite o primeiro valor real: ");
    scanf("%i", &n1);

    printf("Digite o segundo valor real: ");
    scanf("%i", &n2);

    printf("Digite o terceiro valor real: ");
    scanf("%i", &n3);

    // A funcao "abs()" soh aceita inteiros
    // int abs(int n);

    aux = (n1 + n2 + abs(n1 - n2)) / 2;
    maior = (aux + n3 + abs(aux - n3)) / 2;

    printf("\neh o maior: %i", maior);
}