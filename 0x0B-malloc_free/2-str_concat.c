#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - adds 2 strings for size of memory.
 * @s1: first string.
 * @s2: second string.
 * Return: s4
 */
char *str_concat(char *s1, char *s2)
{
	char *s4;
	int i;
	int x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = x = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[x] != '\0')
	{
		x++;
	}
	s4 = malloc(sizeof(char) * (i + x + 1));
	if (s4 == NULL)
	{
		return (NULL);
	}
	i = x = 0;
	for (; s1[i] != '\0'; i++)
	{
		s4[i] = s1[i];
	}
	for (; s2[x] != '\0'; x++)
	{
		s4[i] = s2[x];
		i++;
	}
	s4[i] = '\0';
	return (s4);
}
