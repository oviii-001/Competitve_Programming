#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int total_sum=0;
        for (int i=1; i<=n; i++) {
            int sum=0;
            while(i>0){
                sum += i % 10;
                i /= 10;
            }
            total_sum += sum;
        }
        printf("%d\n", total_sum);
    }
    return 0;
}
