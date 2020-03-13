#include <stdio.h>

int main()
{
    int n1, n2;
    float aux;

    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor: ");
    scanf("%d", &n2);
    aux = (n1 + n2) / 2.0;
    printf("Media dos valores: %f", aux);
    return 0;
}

// A saida do programa quando "n1 = 2" e "n2 = 4" é 3.000000
// A saida do programa quando "n1 = 2" e "n2 = 3" é 2.500000