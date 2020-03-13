#include <stdio.h>

int main(){
    int base, altura, perimetro, area;

    printf("Digite um valor para a base: ");
    scanf("%i", &base);

    printf("Digite um valor para a altura: ");
    scanf("%i", &altura);

    perimetro = 2 * base + 2 * altura;
    area = base * altura;

    if(area > perimetro){
        printf("\nAREA EH MAIOR");
    }
    if(perimetro > area){
        printf("\nPERIMETRO EH MAIOR");
    }
    if(area == perimetro){
        printf("\nAREA E PERIMETRO TEM VALORES IGUAIS");
    }

    return 0;
}