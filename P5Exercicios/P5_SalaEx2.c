#include <stdio.h>
#include <math.h>

int main(){
    int A, B;
    float resultado;
    char operacao;

    printf("Digite o valor para A: ");
    scanf("%i", &A);

    printf("Digite o valor para B: ");
    scanf("%i", &B);

    printf("\n‘s’ => some os valores de A e B\n");
    printf("'b' => subtraia os valores de A e B\n");
    printf("'m' => multiplique os valores de A e B\n");
    printf("'d' => divida os valores de A e B\n");
    printf("'q' => calcule o quociente da divisao de A por B\n");
    printf("'r' => calcule o resto da divisao de A por B\n");
    printf("'e' => calcule o resultado de A elevado a B\n");
    printf("'z' => calcule a raiz A-enesima de B\n");

    printf("\nEscolha uma operacao: ");
    scanf(" %c", &operacao);

    if(operacao == 's'){
        resultado = A + B;
    } else if(operacao == 'b'){
        resultado = A - B;
    } else if(operacao == 'm'){
        resultado = A * B;
    } else if(operacao == 'd'){
        resultado = (float)A / B;
    } else if(operacao == 'q'){
        resultado = A / B;
    } else if(operacao == 'r'){
        resultado = A % B;
    } else if(operacao == 'e'){
        resultado = pow(A, B);
    } else if(operacao == 'z'){
        resultado = pow(A, (1.0/B));
    }

    printf("RESULTADO: %f", resultado);
}
