#include <stdio.h>
int main()
{

    double num1, num2, Addition, Subtraction, Multiplication, Division;
    printf("Please enter a number: ");
    scanf("%lf", &num1);
    printf("Please enter another number: ");
    scanf("%lf", &num2);
    Addition = num1+num2;
    Subtraction = num1-num2;
    Multiplication = num1*num2;
    Division = num1/num2;
    printf("Addition is %0.2lf\n", Addition);
    printf("Subtraction is %0.2lf\n", Subtraction);
    printf("Multiplication is %0.2lf\n", Multiplication);
    printf("Division is %0.2lf\n", Division);

    return 0;

}
