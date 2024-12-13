#include <stdio.h>
int main()
{
    int N, M, temp;
    scanf("%d %d", &N, &M);
    if(N>M){
    temp=N;
    N=M;
    M=temp;
    N++;
    }
    for(int i=N; i<M; i++){
            if((i % 5 == 2) || (i % 5 == 3)){
                printf("%d\n", i);
            }
        }
return 0;

}
