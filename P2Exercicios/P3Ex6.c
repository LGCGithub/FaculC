#include <stdio.h>

void main(){
    int segundos, d, h, m, s, aux; 

    printf("Digite um valor inteiro que representa segundos: ");
    scanf("%i", &segundos);

    aux = segundos;

    d = aux / 86400;
    aux %= 86400;

    h = aux / 3600;
    aux %= 3600;

    m = aux / 60;
    aux %= 60;

    s = aux;

    printf("\n%i segundos correspondem a %i dias, %i horas, %i minutos e %i segundos.", segundos, d, h, m, s);
}