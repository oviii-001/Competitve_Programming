#include <stdio.h>
int main()
{

   float A;
   scanf("%f", &A);

   if(25.00<A&&A<=50.00){
       printf("Intervalo (25,50]\n");
    }
    else if(0<=A&&A<=25.00){
       printf("Intervalo [0,25]\n");
    }
    else if(50.00<A&&A<=75.00){
       printf("Intervalo (50,75]\n");
    }
    else if(75.00<A&&A<=100.00){
       printf("Intervalo (75,100]\n");
    }
    else if(A<0||A>100.00){
       printf("Fora de intervalo\n");
    }


return 0;


}
