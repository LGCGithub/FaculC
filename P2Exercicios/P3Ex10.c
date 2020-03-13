#include <stdio.h>

void main(){
    float n1, n2, n3, media;

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota do aluno: ");
    scanf("%f", &n3);

    media = (n1 * 2 + n2 * 3 + n3 * 5) / 10.0;

    printf("\nMedia do aluno: %.1f", media);
}