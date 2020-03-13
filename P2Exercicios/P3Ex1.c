#include <stdio.h>

void main(){
    float base, altura, perimetro;

    printf("Digite um valor para a base do retangulo: ");
    scanf("%f", &base);

    printf("Digite um valor para a altura do retangulo: ");
    scanf("%f", &altura);

    perimetro = (2 * base) + (2 * altura);

    printf("\nPerimetro do retangulo: %.3f", perimetro);
}