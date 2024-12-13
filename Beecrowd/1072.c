#include <stdio.h>
int main()
{
    int N, count_in=0, count_out=0, X;
    scanf("%d", &N);
    for(int i=0; i<N; i++){
    scanf("%d", &X);
    if(10<=X && X<=20){
    count_in++;
    }
    else{
    count_out++;
    }
    }
    printf("%d in\n", count_in);
    printf("%d out\n", count_out);

return 0;

}
