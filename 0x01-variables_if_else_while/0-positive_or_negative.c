#include<time.h>
#include<stdio.h>
#include<stdlib.h>
/**
*main-assigna randomnumber to the variable n each time it is executed.
*if the number is greater than zero: is positive,if the number is zero: is zero.
*if the number is less than zero: is negative, followed by a new line.
*Return:zero
*/
 int main(void)
{
 int n;
 srand(time(0));
 n = rand() - RAND_MAX / 2;
 if (n>0)
{
 printf("%d is positive\n",n);
}	
 else if (n<0)
{
 printf("%d is negative\n",n);
}	
 else 
{
 printf("%d is zero\n",n);
}
 return (0);
}
