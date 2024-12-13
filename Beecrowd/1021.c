#include <stdio.h>
int main()
{
    double N;
    scanf("%lf", &N);
    N = N * 100;
    int M;
    M = N;
    printf("NOTAS:\n");
    int note100, note50, note20, note10, note5, note2, coin1, coin50, coin25, coin10, coin05, coin01, remainder;

    note100 = M/10000;
    remainder = M % 10000;
    printf("%d nota(s) de R$ 100.00\n", note100);

    note50 = remainder/5000;
    remainder = remainder % 5000;
    printf("%d nota(s) de R$ 50.00\n", note50);

    note20 = remainder/2000;
    remainder = remainder % 2000;
    printf("%d nota(s) de R$ 20.00\n", note20);

    note10 = remainder/1000;
    remainder = remainder % 1000;
    printf("%d nota(s) de R$ 10.00\n", note10);

    note5 = remainder/500;
    remainder = remainder % 500;
    printf("%d nota(s) de R$ 5.00\n", note5);

    note2 = remainder/200;
     remainder = remainder % 200;
    printf("%d nota(s) de R$ 2.00\n", note2);

    printf("MOEDAS:\n");

    coin1 = remainder/100;
    remainder = remainder % 100;
    printf("%d moeda(s) de R$ 1.00\n", coin1);

    coin50 = remainder/50;
    remainder = remainder % 50;
    printf("%d moeda(s) de R$ 0.50\n", coin50);

    coin25 = remainder/25;
    remainder = remainder % 25;
    printf("%d moeda(s) de R$ 0.25\n", coin25);

    coin10 = remainder/10;
    remainder = remainder % 10;
    printf("%d moeda(s) de R$ 0.10\n", coin10);

    coin05 = remainder/5;
    remainder = remainder % 5;
    printf("%d moeda(s) de R$ 0.05\n", coin05);

    coin01 = remainder/1;
    printf("%d moeda(s) de R$ 0.01\n", coin01);


return 0;


}
