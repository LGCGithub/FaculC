#include <stdio.h>

int main(){
    float A, G, Ra, Rg;

    printf("Qual o preco por litro do alcool? ");
    scanf("%f", &A);

    printf("Qual o preco por litro da gasolina? ");
    scanf("%f", &G);

    printf("Qual o rendimento do alcool (km/l)? ");
    scanf("%f", &Ra);

    printf("Qual o rendimento da gasolina (km/l)? ");
    scanf("%f", &Rg);

    if(Ra/A <= Rg/G){
        printf("G");
    } else {
        printf("A");
    }


    return 0;
}