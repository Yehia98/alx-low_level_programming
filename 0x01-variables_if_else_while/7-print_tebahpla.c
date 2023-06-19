#include <stdio.h>
/**
 * main - printing the alphabet in reverse.
 * Description: A program that prints the alphabet in reverse.
 * Return: Always 0 (success)
 */
int main(void)
{
	int z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
