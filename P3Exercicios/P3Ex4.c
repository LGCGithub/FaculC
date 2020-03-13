#include <stdio.h>
#include <stdbool.h>

int main(){
    int a, b, c, d;
    bool condicao;

    printf("Digite quatro valores inteiros: ");
    scanf("%i %i %i %i", &a, &b, &c, &d);

    condicao = (b > c) && (d > a) && ((c + d) > (a + b)) && (c > 0) && (d > 0) && ((a % 2) == 0);
    // 0_o

    if(condicao){
        printf("Valores aceitos.");
    } else {
        printf("Valores nao aceitos.");
    }
    
    return 0;
}