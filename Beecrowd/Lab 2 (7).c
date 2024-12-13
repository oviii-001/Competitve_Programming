#include <stdio.h>
int main()
{
    int subject, aggregate=0;
    float average;

    printf("Enter marks of five subjects:\n");

    for(int i = 0; i < 5; ++i){
    printf("Subject %d: ", i + 1);
    scanf("%d", &subject);
    aggregate+=subject;
    }
    average = aggregate/5.0;

    printf("Aggregate marks = %d\n", aggregate);
    printf("Average marks = %0.2f\n", average);

return 0;

}
