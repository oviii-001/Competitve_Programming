#include <stdio.h>
int main()
{
    int value, year, month, day;
    scanf("%d", &value);
    year = value/365;
    month = (value -(year*365))/30;
    day = ((value -(year*365)))-(month*30);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, month, day);

return 0;

}
