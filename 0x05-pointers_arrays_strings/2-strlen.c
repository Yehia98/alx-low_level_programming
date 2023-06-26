#include "main.h"
/**
 * int _strlen - returns the length of a string.
 * Description: a function that returns the length of a string.
 * result: len.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
	{
		length++;
	}
	return (length);
}
