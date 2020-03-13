#include <stdio.h>
#include <math.h>

int main(){
    int farinha, ovos, leite, menor, aux;

    printf("Insira a quantidade de farinha de trigo: ");
    scanf("%i", &farinha);

    printf("Insira a quantidade de ovos: ");
    scanf("%i", &ovos);

    printf("Insira a quantidade de colheres de leite: ");
    scanf("%i", &leite);

    farinha = farinha / 2;
    ovos = ovos / 3;
    leite = leite / 5;

    aux = (farinha + ovos) / 2 - (abs(farinha - ovos)) / 2; // Menor entre Farinha e Ovos => Aux
    menor = (aux + leite) / 2 - (abs(aux - leite)) / 2;     // Menor entre Leite e Aux => Menor

    printf("%i bolos podem ser feitos", menor);

    return 0;
}