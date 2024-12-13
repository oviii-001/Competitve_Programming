#include <stdio.h>
int main()
{

    int X, Y;
    scanf("%d\n%d", &X, &Y);
    int A=1, B=2, C=3, D=4, E=5;
    double a=4.00, b=4.50, c=5.00, d=2.00, e=1.50;

    if(A==X){
       printf("Total: R$ %0.2lf\n", Y*a);
    }
    else if(B==X){
       printf("Total: R$ %0.2lf\n", Y*b);
    }
    else if(C==X){
       printf("Total: R$ %0.2lf\n", Y*c);
    }
    else if(D==X){
       printf("Total: R$ %0.2lf\n", Y*d);
    }
    else if(E==X){
       printf("Total: R$ %0.2lf\n", Y*e);
    }

return 0;

}
