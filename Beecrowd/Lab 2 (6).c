#include <stdio.h>
int main()
{
    float basic_salary, dearness_allowance, house_rent, gross_salary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic_salary);

    dearness_allowance = basic_salary * 0.4;
    house_rent = basic_salary * 0.2;

    gross_salary = basic_salary + dearness_allowance + house_rent;

    printf("\nGross Salary: %0.2f\n", gross_salary);

return 0;

}
