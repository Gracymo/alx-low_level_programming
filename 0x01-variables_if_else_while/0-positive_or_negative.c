#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 * 
 * Description: 'positive or negative'
 * 
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
	{
		/*if condition is true then prints the following*/
		printf ("%d is positive\n", n);
	}
	else if(n == 0)
	{
		/*else if condition is true*/
		printf ("%d is zero\n", n);
	}
	else
	{
		/*if none of the condition is true print the following*/
		printf ("%d is negative\n", n);
	}
	return (0);
}

