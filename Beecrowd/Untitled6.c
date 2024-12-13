#include<stdio.h>
//A Program to print the table of a number input by the user
int main ()
{
int n;
printf ("Enter the value of n:") ;
scanf ("%d", &n) ;
for(int i=0; i <= 10; i++)
{
printf("%d\n", i*n);
}
return 0;
}
