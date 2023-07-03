#include "main.h"
/**
 * _strchr - locates a character in a string..
 * @s: string.
 * @c: thee desired character to be located.
 * Return: always 0 success
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
