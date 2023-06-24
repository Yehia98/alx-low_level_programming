#include  <stdio.h>
/**
 * main - computes and prints the sum of all the multiples of 3 or 5.
 * Description: A program prints the sum of all the multiples of 3 or 5.
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int k = 0;

	for (n = 0; n < 1024; n++)
	{

		if (((n % 3) == 0) || ((n % 5) == 0))
		{
			k = k + n;
		}
	}
printf("%d\n", k);
return (0);
}
