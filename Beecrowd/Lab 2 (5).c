#include <stdio.h>
int main()
{
    int distance;
    printf("The distance between Mirpur and Ashulia in meter is: ");
    scanf("%d", &distance);
    printf("\n");

    printf("Distance in feet= %0.2f feet\n", (float)distance*3.21);
    printf("Distance in inches= %0.2f inch\n", (float)distance*39.37);
    printf("Distance in centimeters= %0.2f cm\n", (float)distance*100.00);


return 0;


}
