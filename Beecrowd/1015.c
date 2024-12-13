#include <stdio.h>
#include <math.h>
int main()
{
    double x1, y1, x2, y2, Distance;
    scanf("%lf%lf", &x1, &y1);
    scanf("%lf%lf", &x2, &y2);
    Distance = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
    printf("%0.4lf\n", Distance);

    return 0;
}
