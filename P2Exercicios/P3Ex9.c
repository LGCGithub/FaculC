#include <stdio.h>

void main(){
    int km, pedagios;
    float valor;

    printf("Digite um valor inteiro que representa a distancia entre as cidades (km): ");
    scanf("%i", &km);

    printf("Digite um um valor inteiro que representa a quantidade de pedagios no caminho: ");
    scanf("%i", &pedagios);

    valor = (km / 15) * 2.6 + (pedagios * 8);

    printf("\nO valor total gasto na viagem, combustivel + pedagios, eh: R$ %.2f", valor);
}