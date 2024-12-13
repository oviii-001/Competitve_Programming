#include <stdio.h>
#include <math.h>
int main()
{

     int n=0, m, p;
     scanf("%d", &m);

     while(n<=m){
         n++;
         if(n%2==0){
             p=pow(n,2);
            printf("%d^2 = %d\n", n, p);
        }
    }

return 0;



}
