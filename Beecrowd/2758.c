#include <stdio.h>
int main()
{
    float A, B;
    double C, D;
    scanf("%f %f", &A, &B);
    scanf("%lf %lf", &C, &D);
    printf("A = %0.6f, B = %0.6f\n", A, B);
    printf("C = %0.6lf, D = %0.6lf\n", C, D);
    printf("A = %0.1f, B = %0.1f\n", A, B);
    printf("C = %0.1lf, D = %0.1lf\n", C, D);
    printf("A = %0.2f, B = %0.2f\n", A, B);
    printf("C = %0.2lf, D = %0.2lf\n", C, D);
    printf("A = %0.3f, B = %0.3f\n", A, B);
    printf("C = %0.3lf, D = %0.3lf\n", C, D);
    printf("A = %0.3E, B = %0.3E\n", A, B);
    printf("C = %0.3E, D = %0.3E\n", C, D);
    printf("A = %0.0f, B = %0.0f\n", A, B);
    printf("C = %0.0lf, D = %0.0lf\n", C, D);


return 0;


}
