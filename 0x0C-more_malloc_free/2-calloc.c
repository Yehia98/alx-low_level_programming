#include <stdlib.h>
#include "main.h"

/**
* *_calloc - allocates memory for an array
* @nmemb: number of elements in the array
* @size: size of each element
* Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;
	unsigned int n = 0;

	n = size * nmemb;
	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	ptr = malloc(n);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
