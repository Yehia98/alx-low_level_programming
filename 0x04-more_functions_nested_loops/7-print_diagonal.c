#include "main.h"
/**
 * print_diagonal - draws a diagonal line.
 * @n : is the number of times the character \ should be printed.
 * return void.
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x, i;

		for (x = 0; x < n; x++)
		{
			for (i = 0; i < n; i++)
			{
				if (i == x)
					_putchar('\\');
				else if (i < x)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
