#include <stdio.h>

int main()
{
    float N;
    scanf("%f", &N);
    float a=0.15, b=0.12, c=0.10, d=0.07, e=0.04;
    float New, earned;
    if(0<N&&N<=400.00){
        earned = N*a;
        New = earned + N;
        printf("Novo salario: %0.2f\n", New);
        printf("Reajuste ganho: %0.2f\n", earned);
        printf("Em percentual: %0.0f %%\n", a*100);
    }
    else if(400.00<=N&&N<=800.00){
        earned = N*b;
        New = earned + N;
        printf("Novo salario: %0.2f\n", New);
        printf("Reajuste ganho: %0.2f\n", earned);
        printf("Em percentual: %0.0f %%\n", b*100);
    }
    else if(800.01<=N&&N<=1200.00){
        earned = N*c;
        New = earned + N;
        printf("Novo salario: %0.2f\n", New);
        printf("Reajuste ganho: %0.2f\n", earned);
        printf("Em percentual: %0.0f %%\n", c*100);
    }
    else if(1200.01<=N&&N<=2000.00){
        earned = N*d;
        New = earned + N;
        printf("Novo salario: %0.2f\n", New);
        printf("Reajuste ganho: %0.2f\n", earned);
        printf("Em percentual: %0.0f %%\n", d*100);
    }
    else if(N>2000.00){
        earned = N*e;
        New = earned + N;
        printf("Novo salario: %0.2f\n", New);
        printf("Reajuste ganho: %0.2f\n", earned);
        printf("Em percentual: %0.0f %%\n", e*100);
    }
    return 0;
}
