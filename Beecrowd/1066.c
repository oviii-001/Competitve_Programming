#include <stdio.h>
int main()
{
    int n, count_even=0, count_odd=0, count_positive=0, count_negative=0;
    for(int i=0; i<5; i++){
       scanf("%d", &n);
       if(n%2 == 0){
       count_even++;
       }
       if(n%2 != 0){
       count_odd++;
       }
       if(n>0){
        count_positive++;
       }
       if(n<0){
        count_negative++;
       }
    }
     printf("%d valor(es) par(es)\n", count_even);
     printf("%d valor(es) impar(es)\n", count_odd);
     printf("%d valor(es) positivo(s)\n", count_positive);
     printf("%d valor(es) negativo(s)\n", count_negative);

return 0;

}
