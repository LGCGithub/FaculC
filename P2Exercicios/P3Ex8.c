#include <stdio.h>

void main(){
    double c, f;

    printf("Digite um valor inteiro que representa uma temperatura em celsius: ");
    scanf("%lf", &c);

    f = (9 * c + 160) / 5.0;

    printf("\n%.3lf graus Celsius = %.3lf graus Farenheit", c, f);
}