#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int n1, n2, operacao, tempo;
    float resultado, chute;

    srand(time(NULL)); // seed

    n1 = (rand() % 99) + 1;
    n2 = (rand() % 99) + 1;
    operacao = (rand() % 4);

    tempo = time(NULL);

    if(operacao == 0){
        printf("Qual o resultado da soma entre %i e %i? ", n1, n2);
        resultado = n1 + n2;
    } else if(operacao == 1){
        printf("Qual o resultado da subtracao entre %i e %i? ", n1, n2);
        resultado = n1 - n2;
    }else if(operacao == 2){
        printf("Qual o resultado da multiplicacao entre %i e %i? ", n1, n2);
        resultado = n1 * n2;
    } else {
        printf("Qual o resultado da divisao entre %i e %i? ", n1, n2);
        resultado = (float)n1 / n2;
    }

    scanf("%f", &chute);

    tempo = abs(tempo - time(NULL));

    if(resultado == chute){
        printf("ACERTOU! Voce demorou %i segundos para responder a pergunta.", tempo);
    } else {
        printf("ERROU! Voce demorou %i segundos para responder a pergunta.", tempo);
    }

    return 0;
}