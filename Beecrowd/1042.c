#include <stdio.h>
int main()
{

    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if(A>B&&B>C&&A>C){
        printf("%d\n%d\n%d\n", C, B, A);
        printf("\n");
        printf("%d\n%d\n%d\n", A, B, C);
    }
    else if(A>C&&A>B&&C>B){
        printf("%d\n%d\n%d\n", B, C, A);
        printf("\n");
        printf("%d\n%d\n%d\n", A, B, C);
    }
    else if(B>C&&B>A&&A>C){
        printf("%d\n%d\n%d\n", C, A, B);
        printf("\n");
        printf("%d\n%d\n%d\n", A, B, C);
    }
    else if(B>C&&B>A&&C>A){
        printf("%d\n%d\n%d\n", A, C, B);
        printf("\n");
        printf("%d\n%d\n%d\n", A, B, C);
    }
    else if(C>A&&C>B&&B>A){
        printf("%d\n%d\n%d\n", A, B, C);
        printf("\n");
        printf("%d\n%d\n%d\n", A, B, C);
    }
    else if(C>A&&C>B&&A>B){
        printf("%d\n%d\n%d\n", B, A, C);
        printf("\n");
        printf("%d\n%d\n%d\n", A, B, C);
    }

return 0;


}
