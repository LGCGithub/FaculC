#include <stdio.h>

int main()
{
    char aux;

    printf("Digite um caracter: ");
    scanf("%c", &aux);
    printf("Valor Ascii do caracter: %d", aux);
    return 0;
}

// Nesse caso, o número exibido é o valor Ascii/Unicode do caracter digitado