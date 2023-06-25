#include "main.h"
/**
 * more_numbers -  prints 10 times the numbers.
 * Description: a function that prints 10 times the numbers, from 0 to 14.
 * Return: void
 */
void more_numbers(void)
{
	int x = 0;
	int y;

	for (x = 0; x < 10; x++)
	{
		y = 0;
		for (y = 0; y <= 14; y++)
		{
			if (y < 9)
			{
				_putchar(y + '0');
			}
			else if ((y > 0) && (y <= 14))
			{
				_putchar((y / 10) + '0');
				_putchar((y % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
