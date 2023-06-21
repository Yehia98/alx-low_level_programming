#include "main.h"

/**
 * _abs - computes absolute value of an intger.
 * @c : the character being checked.
 * Return: absolute value or same value
 */

int _abs(int c)
{
	int val = c * (-1);

	if (c < 0)
	{
		c = val;
		return (val);
	}
	return (c);
}
