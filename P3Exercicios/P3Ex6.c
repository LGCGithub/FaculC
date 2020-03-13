#include <stdio.h>

int main(){
    float saldoMedio;

    printf("Informe o saldo medio do cliente: ");
    scanf("%f", &saldoMedio);

    if(saldoMedio > 600){
        printf("Credito: R$ %.2f", saldoMedio * 0.4);
    } else if(saldoMedio >= 401){
        printf("Credito: R$ %.2f", saldoMedio * 0.3);
    } else if(saldoMedio >= 201){
        printf("Credito: R$ %.2f", saldoMedio * 0.2);
    } else {
        printf("Credito: RS 0.00");
    }
    
    return 0;
}