#include <stdio.h>

int main()
{
    int inteiro;
    float real;
    char letra;

    printf("Digite um valor int: ");
    scanf("%d", &inteiro);

    printf("Digite um valor real: ");
    scanf("%f", &real);

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    printf("\nValor int: %d\n", inteiro);
    printf("Valor float: %f\n", real);
    printf("Valor char: %c\n", letra);
    return 0;
}