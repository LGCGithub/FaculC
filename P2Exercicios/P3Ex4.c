#include <stdio.h>

void main(){
    int km;
    float litros, consumoMedio;

    printf("Digite a distancia total percorrida: ");
    scanf("%i", &km);

    printf("Digite o total de combustivel gasto: ");
    scanf("%f", &litros);

    consumoMedio = km / litros;

    printf("\n%.3f km/l", consumoMedio);
}