#include <stdio.h>

int main()
{
    int n1, n2, aux;

    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor: ");
    scanf("%d", &n2);
    aux = n1 % n2;
    printf("Resto da divisao: %d", aux);
    return 0;
}