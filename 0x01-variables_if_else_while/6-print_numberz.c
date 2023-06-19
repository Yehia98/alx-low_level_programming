#include <stdio.h>
/**
 * main - printing numbers.
 * Description: A program that prints single digit numbers.
 * Return: Always 0 (success).
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
return (0);
}
