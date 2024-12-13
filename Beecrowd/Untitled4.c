#include <stdio.h>
#include <conio.h>

int main (){

char c;
printf("Enter a Digit : ");
scanf("%c",&c);

if(c>='0' && c<='9'){
    printf("%c is a Digit\n",c);
}
else {
    printf("%c is not a Digit",c);
}

return 0;
}
