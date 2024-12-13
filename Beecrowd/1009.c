#include <stdio.h>
int main()
{

    char NAME;
    double SALARY, SOLD, TOTAL;
    scanf("%s\n%lf\n%lf", &NAME, &SALARY, &SOLD);
    TOTAL = SALARY + (SOLD*0.15);
    printf("TOTAL = R$ %0.2lf\n", TOTAL);


return 0;

}
