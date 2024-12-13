#include <stdio.h>
int main()
{

    int M, N, temp, sum=0;
    while(1){
      scanf("%d %d", &M, &N);
      if(M<=0||N<=0){
      break;
      }
      if(M>N){
        temp=M;
        M=N;
        N=temp;
    }
    for(int i=M; i<=N; i++){
        sum+=i;
        printf("%d ", i);
    }
    printf("Sum=%d\n", sum);
    sum=0;
    }

return 0;

}
