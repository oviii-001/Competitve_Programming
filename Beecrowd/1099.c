#include <stdio.h>
int main()
{
    int n, x, y, temp, sum=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
      scanf("%d %d", &x, &y);
      if(x>y){
        temp=x;
        x=y;
        y=temp;
      }
      for(int j=x+1; j<y; j++){
       if(j % 2 != 0){
         sum+=j;
        }
    }
    printf("%d\n", sum);
    sum=0;
    }

return 0;

}
