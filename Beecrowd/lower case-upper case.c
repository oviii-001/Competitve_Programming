#include <stdio.h>
 int main()
 {
     char ch;
     printf("Enter a character: ");
     scanf("%c", &ch);
     if(ch >= 'a' && ch <= 'z') {
         printf("%c is lower case\n", ch);
     }
     if(ch >= 'A' && ch <= 'Z') {
         printf("%c is upper case\n", ch);
     }
     return 0;
 }
