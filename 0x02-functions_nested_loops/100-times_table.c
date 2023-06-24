#include "main.h"
/**
* print_times_table - prints the n times table
* @n: number of the times table
*/
void print_times_table(int n)
{
int x, y, result;

if (n >= 0 && n <= 15)
{
for (x = 0; x <= n; x++)
{
for (y = 0; y <= n; y++)
{
result = x * y;
if (y == 0)
{
_putchar(result + '0');
}
else if (result < 10 && y != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(result + '0');
}
else if (result >= 10 && result < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
else if (result >= 100)
{
_putchar(',');
_putchar(' ');
_putchar((result / 100) + '0');
_putchar(((result / 10) % 10) + '0');
_putchar((result % 10) + '0');
}
} _putchar('\n');
}
}
}
