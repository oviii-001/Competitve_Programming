#include <stdio.h>

int main() {
    float price, totalSales, commission;
    int numComputersSold, bonus;

    printf("Enter the price of each computer: ");
    scanf("%f", &price);

    printf("Enter the number of computers sold: ");
    scanf("%d", &numComputersSold);

    bonus = numComputersSold * 200.00;
    totalSales = price * numComputersSold;
    commission = totalSales * 0.02;

    float grossSalary = 1500.00 + bonus + commission;

    printf("The gross salary for the sales person is: %.2f\n", grossSalary);

    return 0;
}
