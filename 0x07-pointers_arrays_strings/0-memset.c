#include <stdio.h>
/**
 * _memset - fills the first n bytes of the memory area pointed to by s.
 * @s : the memory address that we start filling.
 * @b : the exchanged value.
 * @n : number of bytes to be changed.
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
