#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int i, m=0;
    for(i=1; i<=10; i++){
        m=m+N;
        printf("%d x %d = %d\n", i, N, m);
    }

return 0;


}
