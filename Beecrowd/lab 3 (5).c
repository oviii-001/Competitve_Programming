#include <stdio.h>

int main() {
    float total_selling_price, total_profit, cost_price_per_item;

    printf("Enter the total selling price of 15 items: ");
    scanf("%f", &total_selling_price);

    printf("Enter the total profit earned on the items: ");
    scanf("%f", &total_profit);

    cost_price_per_item = (total_selling_price - total_profit) / 15;

    printf("The cost price of one item is: %0.2f\n", cost_price_per_item);

    return 0;
}
