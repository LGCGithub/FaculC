#include <stdio.h>

int main(){
    int ano;

    printf("Digite um valor inteiro, representando um ano: ");
    scanf("%i", &ano);

    if(ano % 400 == 0 || ((ano % 4) == 0 && (ano % 100) != 0)){
        printf("\nEh ano bissexto!");
    } else {
        printf("\nNao eh ano bissexto.");
    }
    
    return 0;
}