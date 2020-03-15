#include <stdio.h>

int main(){
    char cod_prod;

    printf("Por favor forneça o codigo do produto (A ate D): ");
    scanf("%c", &cod_prod);

    if(cod_prod == 'A'){
        printf("Lampada 60 W e o valor total eh R$ %.2f", (1.2 * 7));
    } else {
        if(cod_prod == 'B'){
            printf("Lampada 100W e o valor total eh R$ %.2f", (2.5 * 5));
        } else {
            if(cod_prod == 'C'){
                printf("Reator de partida lenta e o valor total eh %.2f", (59.0 * 3));
            } else {
                if(cod_prod == 'D'){
                    printf("Reator de partida rapida e o valor total eh R$ %.2f", (124.0 * 2));
                } else {
                    printf("Produto nao disponivel no estoque");
                }
            }
        }
    }

    printf("\n");

    if(cod_prod == 'A'){
        printf("Lampada 60 W e o valor total eh R$ %.2f", (1.2 * 7));
    } else if(cod_prod == 'B'){
        printf("Lampada 100W e o valor total eh R$ %.2f", (2.5 * 5));
    } else if(cod_prod == 'C'){
        printf("Reator de partida lenta e o valor total eh %.2f", (59.0 * 3));
    } else if(cod_prod == 'D'){
        printf("Reator de partida rapida e o valor total eh R$ %.2f", (124.0 * 2));
    } else {
        printf("Produto nao disponivel no estoque");
    }

    printf("\nFim do programa");
}
