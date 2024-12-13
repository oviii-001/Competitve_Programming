#include <stdio.h>
int main()
{

     int X=0, M;
     scanf("%d", &M);

     while(X<=M){
         X++;
         if(X%2){
            printf("%d\n", X);
         }
     }

return 0;


}
