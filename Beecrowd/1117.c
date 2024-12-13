#include <stdio.h>
int main()
{
    float x, sum=0;
    while(1){
    scanf("%f", &x);
    if(0<=x&&x<=10){
        sum+=x;
        printf("media = %0.2f\n", x);
        break;
    }
    else{
        printf("nota invalida\n");
    }
    }
return 0;

}
