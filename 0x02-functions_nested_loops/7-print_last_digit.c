#include "main.h"

/**
 * print_last_digit - prints the last digit of number.
 * @n : the character being checked.
 *
 * Return: tha last digit of a number.
 */
int print_last_digit(int n)
{
	int result = n % 10;

	if (n < 0)
	{
		result = result * -1;
	}
	_putchar('0' + result);
	return (result);
}
