#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate to a new memory space location.
 * @str: char
 * Return: p
 */
char *_strdup(char *str)
{
	char *p;
	int i, x;
	int n = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x] != '\0'; x++)
	{
		n++;
	}
	p = malloc(sizeof(char) * (n + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		p[i] = str[i];
	return (p);
}
