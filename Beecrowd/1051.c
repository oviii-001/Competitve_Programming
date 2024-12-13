#include <stdio.h>
#include <math.h>
int main()
{

     float a, A, B, C;
     scanf("%f", &a);
     A=(a-2000.00)*0.08;
     B=(1000.00*0.08)+((a-3000.00)*0.18);
     C=(1000.00*0.08)+(1500.00*0.18)+((a-4500.00)*0.28);

     if(0.00 < a && a <= 2000.00){
           printf("Isento\n");
     }
     else if(2000.01 <= a && a <= 3000.00){
        printf("R$ %0.2f\n", A);
     }
     else if(3000.01 <= a && a <= 4500.00){
        printf("R$ %0.2f\n", B);
     }
     else if(a >=4500.01){
        printf("R$ %0.2f\n", C);
     }


return 0;


}
