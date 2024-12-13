#include <stdio.h>
int main()
{
    int x, max=0, position;
    for(int i=1; i<=100; i++){
        scanf("%d", &x);
        if(x>max){
            max=x;
            position=i;
        }
    }
    printf("%d\n%d\n", max, position);


return 0;

}
