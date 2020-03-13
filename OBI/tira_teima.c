#include <stdio.h>
#include <stdbool.h>

void main()
{
    int X, Y;
    bool c1, c2;

    scanf("%i %i", &X, &Y);

    c1 = X >= 0 && X <= 432;
    c2 = Y >= 0 && Y <= 468;

    if(c1 && c2){
        printf("d");
    } else {
        printf("f");
    }
}