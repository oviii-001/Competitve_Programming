#include <stdio.h>
int main()
{

    float A, B, C, d, e;
    scanf("%f\n%f\n%f", &A, &B, &C);
    d = A+B+C;
    e = (A+B)*0.5*C;
    if(A+B>C&&B+C>A&&A+C>B){
        printf("Perimetro = %0.1f\n", d);
    }
    else{
        printf("Area = %0.1f\n", e);
    }


return 0;



}
