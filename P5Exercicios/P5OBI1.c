#include <stdio.h>

int main(){
    int metrocubico;
    int valor;

    printf("Digite o numero de metros cubicos de agua consumidos no mes: ");
    scanf("%i", &metrocubico);

    if(metrocubico > 100){
        valor = (metrocubico - 100) * 5 + 167; 
    } else if(metrocubico > 30){
        valor = (metrocubico - 30) * 2 + 27;
    } else if(metrocubico > 10){
        valor = (metrocubico - 10) + 7;
    } else {
        valor = 7;
    }

    printf("O valor da conta eh: R$ %i.00", valor);

}