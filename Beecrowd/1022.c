#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int N1, N2, D1, D2;
    char ch;

    for(int i=0; i<n; i++){
    scanf("%d %c %d %c %d %c %d", &N1, &ch, &D1, &ch, &N2, &ch, &D2);
    int sum1, sum2, sub1, sub2, mul1, mul2, div1, div2;
    sum1=(N1*D2 + N2*D1);
    sum2=(D1*D2);
    sub1=(N1*D2 - N2*D1);
    sub2=sum2;
    mul1=(N1*N2);
    mul2=sum2;
    div1=(N1*D2);
    div2=(N2*D1);
    }




return 0;

}
