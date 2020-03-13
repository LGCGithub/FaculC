#include <stdio.h>

int main()
{
    char letra;
    int valorUnicode;

    printf("Digite um caracter maiusculo: ");
    scanf("%c", &letra);
    printf("%c", (letra + 32));
    return 0;
}