#include <stdio.h>
#include <math.h>
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
        printf("A sua idade eh: %i\n", idade);
    } else {
        printf("A sua idade eh: %i\n", (idade - 1));
    }

    /*
        Bom dia, boa tarde ou boa noite.

        Caro leitor:
        Quando eu escrevi esse trecho desse codigo apenas eu e Deus sabiamos como o ele funcionava.
        Hoje apenas Deus sabe. 
        
        Por favor, não se dê o trabalho de tentar entende-lo.

        --LGC

    */

    int dia_da_semana, doomsday, milenio, seculo;

    milenio = ano / 1000;
    seculo = ano % 1000;

    doomsday =((milenio + (seculo / 12) + (seculo % 12) + ((seculo % 12) / 4)) % 7);    

    if(mes == 1){
        if(ano % 400 == 0 || ((ano % 4) == 0 && (ano % 100) != 0)){ // Se for ano bissexto
            dia_da_semana = (abs(doomsday - (4 % 7)) + (dia % 7)) % 7;
        } else {
            dia_da_semana = (abs(doomsday - (3 % 7)) + (dia % 7)) % 7;
        }
    } else if(mes == 2){
        if(ano % 400 == 0 || ((ano % 4) == 0 && (ano % 100) != 0)){
            dia_da_semana = (abs(doomsday - (29 % 7)) + (dia % 7)) % 7;
        } else {
            dia_da_semana = (abs(doomsday - (28 % 7)) + (dia % 7)) % 7;
        }
    }else if(mes == 3){
        dia_da_semana = (abs(doomsday - (14 % 7)) + (dia % 7)) % 7;
    }else if(mes == 4){
        dia_da_semana = (abs(doomsday - (4 % 7)) + (dia % 7)) % 7;
    }else if(mes == 5){
        dia_da_semana = (abs(doomsday - (9 % 7)) + (dia % 7)) % 7;
    }else if(mes == 6){
        dia_da_semana = (abs(doomsday - (6 % 7)) + (dia % 7)) % 7;
    }else if(mes == 7){
        dia_da_semana = (abs(doomsday - (11 % 7)) + (dia % 7)) % 7;
    }else if(mes == 8){
        dia_da_semana = (abs(doomsday - (8 % 7)) + (dia % 7)) % 7;
    }else if(mes == 9){
        dia_da_semana = (abs(doomsday - (5 % 7)) + (dia % 7)) % 7;
    }else if(mes == 10){
        dia_da_semana = (abs(doomsday - (10 % 7)) + (dia % 7)) % 7;
    }else if(mes == 11){
        dia_da_semana = (abs(doomsday - (7 % 7)) + (dia % 7)) % 7;
    }else {
        dia_da_semana = (abs(doomsday - (12 % 7)) + (dia % 7)) % 7;
    }

    if(dia_da_semana == 0){
        printf("A pessoa nasceu num Domingo");
    } else if(dia_da_semana == 1){
        printf("A pessoa nasceu numa Segunda-feira");
    } else if(dia_da_semana == 2){
        printf("A pessoa nasceu numa Terca-feira");
    } else if(dia_da_semana == 3){
        printf("A pessoa nasceu numa Quarta-feira");
    } else if(dia_da_semana == 4){
        printf("A pessoa nasceu numa Quinta-feira");
    } else if(dia_da_semana == 5){
        printf("A pessoa nasceu numa Sexta-feira");
    } else {
        printf("A pessoa nasceu num Sabado");
    } 


    return 0;
}

