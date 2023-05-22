#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Description: 'find the last digit of a number'
 * Return: Always 0
 */
int main(void)
{
int n;
int lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n %8;
if (lastDigit > 5)
{
	printf("The last digit of %d is %d and is greater than 5\n", n, lastDigit);
}
else if (lastDigit == 0)
{
	printf("The last digit of %d is %d and is 0\n", n, lastDigit);
}
else if (lastDigit < 6 && lastDigit != 0)
{
	printf("The last digit of %d is %d and is less than 6 not 0\n", n, lastDigit);
}
else
{
	printf("The last of %d is %d\n", n, lastDigit);
}
return(0);
}
