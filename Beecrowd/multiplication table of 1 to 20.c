#include<stdio.h>
int main()
{
    int n, i;
    for(n=1; n<=20; n++){
        for(i =1; i<=10;i++){
            printf("%d * %d = %d\n",n,i,i*n);
        }
    }
    return 0;
}
