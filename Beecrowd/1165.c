#include <stdio.h>
int main()
{
     int N;
     scanf("%d", &N);
     for(int i=0; i<N; i++){
      int X;
     scanf("%d", &X);
     if(X==2)printf("%d eh primo\n", X);
     else
    {
        int tmp = 0;
        for(int j=2; j<X; j++)
        {
            if(X%j==0){

                tmp = 1;
                break;
            }
        }
        if(tmp == 1) printf("nao eh primo\n");
        else{
            printf("eh primo\n");
        }
     }



     }


return 0;


}
