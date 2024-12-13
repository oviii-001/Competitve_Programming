#include <stdio.h>

int main()
{
    int x;
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    scanf("%d", &x);

    if(x >0 && x <=12){
       printf("%s\n", months[x-1]);
    }

    return 0;
}
