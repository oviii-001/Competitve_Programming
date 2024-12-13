#include<stdio.h>
int main ()
{
int num;
printf ("Entered obtained number:") ;
scanf ("%d", &num) ;
if(num>=0 && num<30)
{
printf ("\nFail");
}
else if(num>=30 && num<70)
{
printf ("\nGrade is B") ;
}
else if(num>=70 && num<90)
{
printf ("\nGrade is A");
}
else if(num>=90 && num <= 100)
{
printf ("\nGrade is A+") ;
}
else
{
printf ("\nInvalid number") ;
}
}
