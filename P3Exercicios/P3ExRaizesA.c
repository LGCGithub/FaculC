#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, r1, r2;
    
    printf("Por favor forneca os coeficientes da eq. de segundo grau: ");
    scanf("%f %f %f", &a, &b, &c);

    r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    printf("r1 = %f; r2 = %f\n", r1, r2);
    printf("FIM DO PROGRAMA");

    return 0;
}