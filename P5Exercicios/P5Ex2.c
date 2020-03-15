#include <stdio.h>
#define DIA 13
#define MES 3
#define ANO 2020

int main(){
    int dia, mes, ano, idade;

    printf("Digite o ano em que voce nasceu: ");
    scanf("%i", &ano);

    printf("Digite o mes em que voce nasceu (janeiro = 1, fevereiro = 2, etc): ");
    scanf("%i", &mes);

    printf("Digite o dia em que voce nasceu: ");
    scanf("%i", &dia);

    idade = ANO - ano;

    if(MES >= mes && DIA >= dia){
        printf("A sua idade eh: %i", idade);
    } else {
        printf("A sua idade eh: %i", (idade - 1));
    }

    return 0;
}
