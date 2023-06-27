#include <stdio.h>
#include "main.h"
/**
 * print_array - elements of an array of integers.
 * @n : the number of elements of the array.
 * @a: array.
 * Return: void;
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	putchar('\n');
}
