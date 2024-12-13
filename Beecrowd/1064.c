#include <stdio.h>
int main()
{
      int i, count=0;
      float n, sum=0.0, average;

      for(i=0; i<6; i++){
           scanf("%f", &n);
           if(n>0){
           count++;
           sum += n;
           average = sum/count;
           }
        }
        printf("%d valores positivos\n", count);
        printf("%0.1f\n", average);


return 0;


}
