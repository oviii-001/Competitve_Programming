#include <stdio.h>
int main()
{
    float Value, note100, note50, note20, note10, note5, note2, note1;
    scanf("%f", &Value);
    printf("%0.2f\n", Value);
    note100 = Value/100;
    printf("%0.0f nota(s) de R$ 100,00\n", note100);
    note50 = (Value-(note100*100))/50;
    printf("%0.0f nota(s) de R$ 50,00\n", note50);
    note20 = ((Value-(note100*100))-note50*50)/20;
    printf("%0.0f nota(s) de R$ 20,00\n", note20);

    return 0;

}
