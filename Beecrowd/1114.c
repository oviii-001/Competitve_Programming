#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N;
    while(1){
       scanf("%d", &N);
       if(N==2002){
        printf("Acesso Permitido\n");
        exit(0);
       }
       else{
        printf("Senha Invalida\n");
       }
    }
return 0;

}
