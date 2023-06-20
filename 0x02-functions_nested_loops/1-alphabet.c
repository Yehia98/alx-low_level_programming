#include "main.h"

/**
 * print_alphabet - prints the alphabet.
 * Description: A program that prints the alphabet.
 * Return: void
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
