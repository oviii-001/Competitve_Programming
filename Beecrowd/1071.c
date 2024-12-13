#include <stdio.h>

int main() {

    int X, Y, sum = 0, temp;
    scanf("%d %d", &X, &Y);
    if(X>Y){
        temp=X;
        X=Y;
        Y=temp;
    }

    for(X=X+1; X<=Y-1; X++) {
        if (X % 2 != 0) {
            sum += X;
        }
    }
    printf("%d\n", sum);

    return 0;
}
