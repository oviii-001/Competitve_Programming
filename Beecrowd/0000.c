#include <stdio.h>
int main()
{
    int A, B, C, smallest;

    printf("Enter three numbers=\n");
    scanf("%d%d%d", &A, &B, &C);

    smallest=(A<B)?((A<C)?A:C):(B<C)?B:C;
    printf("The smallest number is = %d\n", smallest);


return 0;


}
