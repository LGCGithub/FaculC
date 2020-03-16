#include <stdio.h>
#include <math.h>

int main()
{
    int n1, centena, dezena, unidade, aux;

    printf("Digite um numero entre 100 e 999: ");
    scanf("%i", &n1);

    aux = n1;

    unidade = (n1 % 10) / 1; // Adquire o valor da unidade
    
    dezena = (n1 % 100) / 10; // Adquire o valor da dezena
    
    centena = (n1 % 1000) / 100; // Adquire o valor da centena

    if((pow(unidade, 3) + pow(dezena, 3) + pow(centena, 3)) == aux){
        printf("%i eh um numero de angstron", aux);
    } else {
        printf("%i nao eh um numero de angstron", aux);
    }

}
