#include <stdio.h>
int main()
{
     int N;
     float a, b, c, average;
     scanf("%d", &N);
     for(int i=0; i<N; i++){
     scanf("%f %f %f", &a, &b, &c);
     average= ((a*2)+(b*3)+(c*5))/10;
     printf("%0.1f\n", average);
     }

return 0;

}
