#include <stdio.h>
/**
 * main - printing numbers of base 16.
 * Description: A program that prints numbers of base 16.
 * Return: Always 0 (success).
 */
int main(void)
{
	int a;
	char A = 'a';

	for (a = 0; a < 10; a++)
	{
		putchar('0' + a);
	}
	while (A <= 'f')
	{
		putchar(A);
		A++;
	}
	putchar('\n');
return (0);
}
