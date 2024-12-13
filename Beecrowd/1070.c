#include <stdio.h>
int main()
{

     int X, M, i;
     scanf("%d", &X);
     M = X+11;
     for(i=X; i<=M; i++){
         if(i%2){
            printf("%d\n", i);
         }
     }

return 0;

}
