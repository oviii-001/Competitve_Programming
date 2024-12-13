#include <stdio.h>
int main()
{
    float fahrenheit, centigrade;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    centigrade = (fahrenheit - 32) * 5.0 / 9.0;

    printf("%.2f Fahrenheit is equal to %.2f Centigrade.\n", fahrenheit, centigrade);

    return 0;
}
