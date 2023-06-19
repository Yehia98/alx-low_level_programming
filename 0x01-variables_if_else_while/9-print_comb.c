#include <stdio.h>
/**
 * main - printing all the possible combinations.
 * Description: A program that prints all the possible combinations of numbers.
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
return (0);
}
