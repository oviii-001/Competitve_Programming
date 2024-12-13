#include <stdio.h>
int main(){

     printf("Odd numbers between 1 and 100 are:\n");

     for(int i=0; i<100; i++){
        if(i%2 != 0){
           printf("%d\n", i);
        }
    }

    return 0;

}
