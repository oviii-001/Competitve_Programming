#include <stdio.h>
int main()
{
    int n, a, b;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
    scanf("%d %d", &a, &b);
    if(b==0){
         printf("divisao impossivel\n");
         }
       else{
         double c;
         c=a/(b*1.0);
         printf("%0.1lf\n", c);
        }

    }

return 0;

}
