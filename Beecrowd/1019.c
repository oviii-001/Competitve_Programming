#include <stdio.h>
int main()
{
    int Value, hour, minute, second;
    scanf("%d", &Value);
    hour = Value/3600;
    minute = (Value-(hour*3600))/60;
    second = ((Value-(hour*3600))-minute*60);
    printf("%d:%d:%d\n", hour, minute, second);

return 0;

}
