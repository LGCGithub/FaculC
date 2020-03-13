#include <stdio.h>

int main(){
    int mes;
    float salario;
    float imposto;

    printf("Digite um valor para o mes (1 = Janeiro, 2 = Fevereiro, etc): ");
    scanf("%i", &mes);

    printf("Digite um valor para o salario: ");
    scanf("%f", &salario);

    
    if(mes < 4){
        if(salario >= 3743.19)
            imposto = (salario - 3743.19) * 0.275 + 336.59325;
        else if(salario >= 2995.71)
            imposto = (salario - 2995.71) * 0.225 + 168.41025;
        else if(salario >= 2246.76)
            imposto = (salario - 2246.76) * 0.15 + 56.06925;
        else if(salario >= 1499.16)
            imposto = (salario - 1499.16) * 0.075;
        else 
            imposto = 0;
        
    } else {
        if(salario >= 3911.63)
            imposto = (salario - 3911.63) * 0.275 + 351.846;
        else if(salario >= 3130.52)
            imposto = (salario - 3130.52) * 0.225 + 176.09625;
        else if(salario >= 2347.86) 
            imposto = (salario - 2347.86) * 0.15 + 58.69875;
        else if(salario >= 1566.62)
            imposto = (salario - 2347.86) * 0.075;
        else 
            imposto = 0;
    }

    printf("Para o salario R$ %.2f; O imposto de renda eh R$ %.2f", salario, imposto);

    return 0;
}