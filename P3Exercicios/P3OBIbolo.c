#include <stdio.h>

void main()
{
    int A, B, C, R;

    scanf("%i %i %i", &A, &B, &C);

    A = A / 2;
    B = B / 3;
    C = C / 5;

    if(A <= B && B < C){
        R = A;
    } else if(B < C){
        R = B;
    } else {
        R = C;
    }

    printf("%i", R);
}