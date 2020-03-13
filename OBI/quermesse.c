#include <stdio.h>

void main()
{
    int N, temp, i;
    scanf("%d", &N); // Coleta o tamanho do Vetor

    int Arr[N + 1]; // Erro FAKE

    for(i = 1; i <= N; i++){ // Preenche o vetor
        scanf("%d", &temp);  // Multiplos scans na mesma linha, UTIL
        Arr[i] = temp;
    }

    for(i = 1; i <= N ; i++){ // Checa cada item do vetor e mostra o resultado
        if(Arr[i] == i){
            printf("%d", i);
        }
    }

}

