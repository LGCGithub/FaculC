#include <stdio.h>

void main(){
    double r, volume, PI;
    PI = 3.14159;

    printf("Digite um valor para o raio da esfera: ");
    scanf("%lf", &r);

    volume = (4.0 / 3.0) * PI * (r * r * r);

    printf("\nVOLUME = %.3lf", volume);
}

// float = 4 bytes
// double = long float = 8 bytes