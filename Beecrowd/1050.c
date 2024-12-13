#include <stdio.h>
int main()
{


    char *Destination[]={"Brasilia", "Salvador", "Sao Paulo", "Rio de Janeiro", "Juiz de Fora", "Campinas", "Vitoria", "Belo Horizonte"};
    int x;
    scanf("%d", &x);

    if(x==61){
        printf("%s\n", Destination[0]);
    }
     else if(x==71){
        printf("%s\n", Destination[1]);
    }
     else if(x==11){
        printf("%s\n", Destination[2]);
    }
     else if(x==21){
        printf("%s\n", Destination[3]);
    }
     else if(x==32){
        printf("%s\n", Destination[4]);
    }
     else if(x==19){
        printf("%s\n", Destination[5]);
    }
     else if(x==27){
        printf("%s\n", Destination[6]);
    }
     else if(x==31){
        printf("%s\n", Destination[7]);
    }
    else{
        printf("DDD nao cadastrado\n");
    }
return 0;



}
