#include <stdio.h>
#include <math.h>
int main()
{

    double A, B, C, X1, X2;
    scanf("%lf\n%lf\n%lf", &A, &B, &C);

    if(A==0 || ((pow(B,2))-(4*A*C))<0){
        printf("Impossivel calcular\n");
    }
    else{
        X1 = (-B+(sqrt((pow(B,2))-(4*A*C))))/(2*A);
        X2 = (-B-(sqrt((pow(B,2))-(4*A*C))))/(2*A);
        printf("R1 = %0.5lf\nR2 = %0.5lf\n", X1, X2);
    }

return 0;



}
