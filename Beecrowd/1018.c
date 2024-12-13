#include <stdio.h>
int main()
{
    int Value, note100, note50, note20, note10, note5, note2, note1;
    scanf("%d", &Value);
    printf("%d\n", Value);
    note100 = Value/100;
    printf("%d nota(s) de R$ 100,00\n", note100);
    note50 = (Value-(note100*100))/50;
    printf("%d nota(s) de R$ 50,00\n", note50);
    note20 = ((Value-(note100*100))-note50*50)/20;
    printf("%d nota(s) de R$ 20,00\n", note20);
    note10 = (((Value-(note100*100))-note50*50)-note20*20)/10;
    printf("%d nota(s) de R$ 10,00\n", note10);
    note5 = ((((Value-(note100*100))-note50*50)-note20*20)-note10*10)/5;
    printf("%d nota(s) de R$ 5,00\n", note5);
    note2 = (((((Value-(note100*100))-note50*50)-note20*20)-note10*10)-note5*5)/2;
    printf("%d nota(s) de R$ 2,00\n", note2);
    note1 = ((((((Value-(note100*100))-note50*50)-note20*20)-note10*10)-note5*5)-note2*2)/1;
    printf("%d nota(s) de R$ 1,00\n", note1);

return 0;


}
