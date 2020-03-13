#include <stdio.h>
#include <math.h>

int main(){
    int base, altura, perimetro, area, menor;
    float hipotenusa, raio;

    printf("Digite um valor para a base: ");
    scanf("%i", &base);

    printf("Digite um valor para a altura: ");
    scanf("%i", &altura);

    perimetro = 2 * base + 2 * altura;
    area = base * altura;
    hipotenusa = sqrt(pow(base, 2) + pow(altura, 2));
    

    printf("\nAREA = %i\n", area);
    printf("PERIMETRO = %i\n", perimetro);

    if(area > perimetro){
        printf("\nAREA EH MAIOR");
    }
    if(perimetro > area){
        printf("\nPERIMETRO EH MAIOR");
    }
    if(area == perimetro){
        printf("\nAREA E PERIMETRO TEM VALORES IGUAIS");
    }

    menor = ((base + altura) - (abs(base - altura))) / 2.0;
    raio = (base + altura - hipotenusa) / 2.0;

    if(raio < menor){
        printf("\nO RAIO DA CIRCUFERENCIA INSCRITA NO TRIANGULO RETANGULO EH MENOR QUE O MENOR DOS LADOS, %f < %i", raio, menor);
    }

    return 0;
}