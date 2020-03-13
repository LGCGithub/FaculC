#include <stdio.h>

int main(){
    float inicial, final, minutos, duracao;

    printf("Digite a hora inicial e final de um jogo: ");
    scanf("%f %f", &inicial, &final);

    if(final <= inicial){
        final += 24;
    }

    duracao = final - inicial;
    minutos = (duracao - (int)duracao) * 60; // parte float da duracao * 60

    printf("O jogo durou %i hora(s) e %i minuto(s)", (int)duracao, (int)minutos);

    return 0;
}