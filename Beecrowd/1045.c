#include <stdio.h>
#include <math.h>
int main()
{

    double A, B, C, D, E, temp;
    scanf("%lf\n%lf\n%lf", &A, &B, &C);
    if(A<B){
        temp=A;
        A=B;
        B=temp;
    }
    if(A<C){
        temp=A;
        A=C;
        C=temp;
    }
    if(B<C){
        temp=B;
        B=C;
        C=temp;
    }
    D = B+C;
    E = pow(B,2) + pow(C,2);
    if(A>=D){
        printf("NAO FORMA TRIANGULO\n");
    }
    else{
        if(pow(A,2)==E){
            printf("TRIANGULO RETANGULO\n");
        }
        if(pow(A,2)>E){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if(pow(A,2)<E){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(A==B&&B==C){
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(A==B||B==C||A==C){
            printf("TRIANGULO ISOSCELES\n");
        }
    }

return 0;

}
