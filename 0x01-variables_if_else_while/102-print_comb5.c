#include <stdio.h>
/**
 * main - printing all possible combinations.
 * Description: A program that prints all possible combs of 2 2 digit numbers.
 * Return: Always 0 (success).
 */
int main(void)
{
	int i, m;

	for (i = 0; i <= 99; i++)
	{
		for (m = 0; m <= 99; m++)
		{
			if (i < m && i != m)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((m / 10) + '0');
				putchar((m % 10) + '0');
				if (i != 98 || m != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
