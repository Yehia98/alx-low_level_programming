#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - determine if a random number is positive or negative or zero
 *return: 0 (success)
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
		printf("%d is poitive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
