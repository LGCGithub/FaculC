#include <stdio.h>

int main(){
    float a, b, c, delta, r1, r2;
    
    printf("Por favor forneca os coeficientes da eq. de segundo grau: ");
    scanf("%f %f %f", &a, &b, &c);

    delta = b * b - 4 * a * c;

    if(delta > 0){
        r1 = (-b + sqrt(delta)) / (2 * a);
        r2 = (-b - sqrt(delta)) / (2 * a);

        printf("r1 = %f; r2 = %f\n", r1, r2);
    } else if(delta == 0){
        r1 = (-b + sqrt(delta)) / (2 * a);

        printf("r = %f;\n", r1);
    } else {
        printf("NAO EH POSSIVEL CALCULAR RAIZ DE NUMERO NEGATIVO\n");
    }

    printf("FIM DO PROGRAMA");

    return 0;
}