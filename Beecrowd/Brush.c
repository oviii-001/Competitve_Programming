#include <stdio.h>
int main(){

     int testCase, n, unit, totalUnit;
     scanf("%d", &testCase);

     for(int i=1; i<=testCase; i++){
        scanf("\n");
        scanf("%d", &n);
        totalUnit=0;

        for(int j=0; j<n; j++){
            scanf("%d", &unit);
            if(unit>0){
                totalUnit += unit;
            }
        }
        printf("Case %d: %d\n", i, totalUnit);
     }

     return 0;
}
