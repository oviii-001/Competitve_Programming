#include <stdio.h>
int main()
{
    int i, count=0;
    float N;

    for(i=0; i<6; i++){
        scanf("%f", &N);
        if(N>0){
        count++;
        }
    }
    printf("%d valores positivos\n", count);

return 0;

}
