#include <stdio.h>
int main()
{

     int CODE1, CODE2, UNIT1, UNIT2;
     float PRICE1, PRICE2, Value_to_Pay;
     scanf("%d %d %f\n", &CODE1, &UNIT1, &PRICE1);
     scanf("%d %d %f", &CODE2, &UNIT2, &PRICE2);
     Value_to_Pay = (UNIT1*PRICE1) + (UNIT2*PRICE2);
     printf("VALOR A PAGAR: R$ %0.2f\n", Value_to_Pay);


return 0;


}
