#include <stdio.h>
int main()
{
    int day1, day2;
    int startH, startM, startS, endH, endM, endS;
    char c, ch;

    scanf("%s %d\n%d%c%d%c%d", &c, &day1, &startH, &ch, &startM, &ch, &startS);
    scanf("%s %d\n%d%c%d%c%d", &c, &day1, &startH, &ch, &startM, &ch, &startS);

    int total_start, total_end;
    total_start=(day1*24*60*60)+(startH*60*60)+(startM*60)+startS;
    total_end=(day2*24*60*60)+(endH*60*60)+(endM*60)+endS;

    int duration;
    duration=total_end-total_start;

    int total_day, total_H, total_M, total_S;

    total_M=duration%




return 0;h
