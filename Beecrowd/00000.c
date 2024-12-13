#include <stdio.h>
int main()
{
    double amount, price;

    printf("Enter the number of sold and price of each PC's\n");
    scanf("%lf %lf", &amount, &price);

    printf("Salary=%0.2lf\n", 1500+amount*200+((amount*price)/0.02));

return 0;


}
