#include <stdio.h>

int main(){
    int base, altura, perimetro, area;

    printf("Digite um valor para a base: ");
    scanf("%i", &base);

    printf("Digite um valor para a altura: ");
    scanf("%i", &altura);

    perimetro = 2 * base + 2 * altura;
    area = base * altura;

    printf("\nAREA = %i\n", area);
    printf("PERIMETRO = %i\n", perimetro);

    if(area > perimetro){
        printf("AREA EH MAIOR");
    } else if (perimetro > area){
        printf("PERIMETRO EH MAIOR");
    } else {
        printf("AREA E PERIMETRO TEM VALORES IGUAIS");
    }
    

    return 0;
}