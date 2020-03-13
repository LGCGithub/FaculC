#include <stdio.h>

void main()
{
    int A, B, C, H, L;
    char R = 'N';

    scanf("%i", &A);
    scanf("%i", &B);
    scanf("%i", &C);
    scanf("%i", &H);
    scanf("%i", &L);

    if(C <= H && A <= L){
        R = 'S';
    } else if(A <= H && C <= L){
        R = 'S';
    } else if(C <= H && B <= L){
        R = 'S';
    } else if(B <= H && C <= L){
        R = 'S';
    } else if(B <= H && A <= L){
        R = 'S';
    } else if(A <= H && B <= L){
        R = 'S';
    }

    printf("%c", R);

}