#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, A, B, C;

    printf("Digite tres valores reais: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a >= b && b >= c){
        A = a;
        B = b;
        C = c;
    } else if(a >= c && c >= b){
        A = a;
        B = c;
        C = b;
    } else if(b >= a && a >= c){
        A = b;
        B = a;
        C = c;
    } else if(b >= c && c >= a){
        A = b;
        B = c;
        C = a;
    } else if(c >= a && a >= b){
        A = c;
        B = a;
        C = b;
    } else if(c >= b && b >= a){
        A = c;
        B = b;
        C = a;
    }
    
    if(A > B + C && sqrt((B - C) * (B - C)) > A){
        printf("\nNAO FORMA TRIANGULO");
    } else { 
        
        if(A * A == B * B + C * C){
            printf("\nTRIANGULO RETANGULO");
        }
        if(A * A > B * B + C * C){
            printf("\nTRIANGULO OBTUSANGULO");  
        }
        if(A * A < B * B + C * C){
            printf("\nTRIANGULO ACUTANGULO");
        }
        if(A == B && B == C){
            printf("\nTRIANGULO EQUILATERO");
        }
        if(A == B && B != C){
            printf("\nTRIANGULO ISOCELES");
        }
        if(A == C && C != B){
            printf("\nTRIANGULO ISOCELES");
        }
        if(B == C && A != B){
            printf("\nTRIANGULO ISOCELES");
        }   
    }
    
    return 0;
}