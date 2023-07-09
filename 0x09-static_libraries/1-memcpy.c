#include "main.h"
/**
 * *_memcpy - copies n bytes from memory area src to memory area dest.
 * @dest: the desired destination.
 * @src: the memory area that being copied from.
 * @n: number of bytes being copied.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r;
	int i = n;

	for (r = 0; r < i; r++)
	{
		dest[r] = src[r];
	}
	return (dest);
}
