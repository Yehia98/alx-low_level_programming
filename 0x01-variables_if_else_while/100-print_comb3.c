#include <stdio.h>
/**
 * main - printing all the possible combinations.
 * Description: A program that prints all the possible combinations of numbers.
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int m;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
			}
			if (n != '8' || m != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
return (0);
}
