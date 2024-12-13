#include <stdio.h>
int main()
{

   int a, b, c;
   scanf("%d\n%d", &a, &b);
   c = (24-a)+b;
   if(a>=b){
     printf("O JOGO DUROU %d HORA(S)\n", c);
    }
    else if(b>a){
        printf("O JOGO DUROU %d HORA(S)\n", b-a);
    }



return 0;



}
