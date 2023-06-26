#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a : integer being swaped.
 * @b : integer being swaped.
 * Return : void;.
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
