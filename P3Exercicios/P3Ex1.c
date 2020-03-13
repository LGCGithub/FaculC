#include <stdio.h>

int main(){
    float n1, n2, n3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3.0;

    if(media >= 7.0){
        printf("\nAluno aprovado!");
    } else if(media < 4.0){
        printf("\nAluno reprovado!");
    } else {
        printf("\nAluno em exame.");
    }

    
    return 0;
}