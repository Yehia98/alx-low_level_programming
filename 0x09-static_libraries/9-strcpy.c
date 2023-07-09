#include <stdio.h>
/**
 * *_strcpy - copies the string pointed to by src.
 * @dest: copy destination
 * @src : copy source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; x < i; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
