#include <stdio.h>
int main()

{
    int x = 30, y = 25, z = 20, w = 10;

    z = z - 2;
    x = x + 1;
    y = y * 2;
    w = w % 3;

    printf("w=%d & output is=%d\n", w,(x*y/z-w));
    printf("y:%d and result is:%c", y, x * y / (z - w));

    return (0);
}
