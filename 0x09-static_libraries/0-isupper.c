#include "main.h"
/**
 * _isupper - checks for uppercase character.
 * @c : the character that being checked.
 * Return:  1 for (uppercase) and 0 for (lowercase).
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
