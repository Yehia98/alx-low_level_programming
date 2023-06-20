#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet x10.
 * Description: A program that prints the alphabet x10.
 * Return: void success.
 */
void print_alphabet_x10(void)
{
	char a;
	int b = 0;

	while (b < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		b++;
	}
}
