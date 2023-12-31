#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name -  prints a name.
 * @name: a string.
 * @f: a function pointer that have a pramater of char pointer.
 * Description: a function that prints a name.
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
