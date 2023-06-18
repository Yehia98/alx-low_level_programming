#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Main - determine if a random number is positive, negative or zero
 *
 * Description: A program uses if statements to determine the type of a number
 *
 * Return: Always  0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
