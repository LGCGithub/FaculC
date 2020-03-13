#include <stdio.h>

void main()
{
    int C, N, T;

    scanf("%i %i", &C, &N);
    T = C % N;
    printf("%i", T);
}