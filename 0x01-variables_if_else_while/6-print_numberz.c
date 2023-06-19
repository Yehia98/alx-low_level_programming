#include <stdio.h>
/**
 * main - printing numbers.
 * Description: A program that prints single digit numbers.
 * Return: Always 0 (success).
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar('0' + a);
	}
	putchar('\n');
return (0);
}
