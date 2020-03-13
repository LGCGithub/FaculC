#include <stdio.h>

void main()
{
    int A, M;

    scanf("%i", &A);
    scanf("%i", &M);

    if((A + M) > 50){
        printf("N");
    } else {
        printf("S");
    }
}