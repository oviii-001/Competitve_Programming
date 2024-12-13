#include <stdio.h>
int main()
{
    int a, b, c, MaiorAB, MAX;
    scanf("%d\n%d\n%d", &a, &b, &c);
    MaiorAB = (a+b+abs(a-b))/2;
    MAX = (MaiorAB+c+abs(MaiorAB-c))/2;
    printf("%d eh o maior\n", MAX);

return 0;

}
