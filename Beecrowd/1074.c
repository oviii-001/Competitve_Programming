#include <stdio.h>
int main()
{
     int N, X;
     scanf("%d", &N);
     for(int i=0; i<N; i++){
        scanf("%d", &X);
        if(X==0){
                printf("NULL\n");}
        if(X > 0){
           if(X % 2 == 0) {
                printf("EVEN POSITIVE\n");
           }
           else{
                printf("ODD POSITIVE\n");
           }
        }
        if(X<0){
           if(X % 2 == 0) {
                printf("EVEN NEGATIVE\n");
           }
           else{
                printf("ODD NEGATIVE\n");
           }
         }
      }

return 0;

}
