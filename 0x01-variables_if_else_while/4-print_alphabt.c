#include <stdio.h>
/**
 * main - printing the alphabet.
 * Description: A program that prints the alphabet.
 * Return: Always 0 (success).
 */
int main(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		if (a == 'e' || a == 'q')
		{
		++a;
		}
		putchar(a);
		a++;
	}
	putchar('\n');
return (0);
}
