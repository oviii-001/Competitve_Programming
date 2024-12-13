#include <stdio.h>
int main()
{
    int position;
    char letter;
    scanf("%c", &letter);
    position=(letter-'A')+1;

    printf("%d\n", position);

return 0;

}
