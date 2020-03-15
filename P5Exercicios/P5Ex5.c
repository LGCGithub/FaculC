#include <stdio.h>

int main(){

    int n1, n2, n3, aux;

    if(n2 >= n3){
        aux = n2;
        n2 = n3;
        n3 = aux;
    }
    if(n1 >= n2){
        aux = n1;
        n1 = n2;
        n2 = aux;

        if(n2 >= n3){
            aux = n2;
            n2 = n3;
            n3 = aux;
        }
    }
    printf("%d %d %d\n", n1, n2, n3);  
    return 0;

    // 1, 2, 3 => 1, 2, 3
    // 20, 10, 30 => 10, 20, 30
    // 5*5, n1/2, n2+1 => 25, 12, 13 => 12, 13, 25

    // Organiza tres numeros fornecidos em ordem do menor para o maior e mostra na tela
}