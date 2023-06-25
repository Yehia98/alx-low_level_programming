#include "main.h"
/**
 * _isdigit - checks for a digit.
 * @c : the checked character
 * Return: 1 for a digit and 0 for anything else.
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
