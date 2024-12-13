#include <stdio.h>
#define pi 3.14159
int main()
{
    double A, B, C, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
    scanf("%lf\n%lf\n%lf", &A, &B, &C);
    TRIANGULO = (1/2.0)*A*C;
    CIRCULO = pi*(C*C);
    TRAPEZIO = (1/2.0)*(A+B)*C;
    QUADRADO = (B*B);
    RETANGULO = A*B;
    printf("TRIANGULO: %0.3lf\nCIRCULO: %0.3lf\nTRAPEZIO: %0.3lf\nQUADRADO: %0.3lf\nRETANGULO: %0.3lf\n", TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO);


return 0;


}
