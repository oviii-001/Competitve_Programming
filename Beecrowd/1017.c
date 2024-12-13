#include <stdio.h>
int main()
{
    int time, speed;
    float fuel;
    scanf("%d\n%d", &time, &speed);
    fuel = (time*speed)/12.0;
    printf("%0.3f\n", fuel);

return 0;

}
