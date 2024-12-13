#include <stdio.h>
int main()
{

    int num1, num2, Addition, Subtraction, Multiplication, Division;
    printf("Please enter a number: ");
    scanf("%d", &num1);
    printf("Please enter another number: ");
    scanf("%d", &num2);
    Addition = num1+num2;
    Subtraction = num1-num2;
    Multiplication = num1*num2;
    Division = num1/num2;
    printf("Addition is %d\n", Addition);
    printf("Subtraction is %d\n", Subtraction);
    printf("Multiplication is %d\n", Multiplication);
    printf("Division is %d\n", Division);

    return 0;

}
