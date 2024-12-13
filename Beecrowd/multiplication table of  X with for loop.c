#include <stdio.h>
int main(){

    int n, i, m;
    m=0;
    printf("Enter the number of multiplication= ");
    scanf("%d", &n);
    for(i=1; i<=10; i++){
       m=m+n;
         printf("%d X %d = %d\n", n, i, m);
         }
    return 0;
    }
