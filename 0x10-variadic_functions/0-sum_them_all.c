#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: count of arguments.
 * Return: sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ip;

	if (n == 0)
		return (0);

	va_start(ip, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ip, unsigned int);
	}
	va_end(ip);
return (sum);
}
