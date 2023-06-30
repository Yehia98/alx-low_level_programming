#include "main.h"

/**
* rev_string - reverse array
* @n: integer params
* Return: 0
*/

void rev_string(char *n)
{
int i = 0;
int x = 0;
char temp;

while (*(n + i) != '\0')
{
i++;
}
i--;

for (x = 0; x < i; x++, i--)
{
temp = *(n + x);
*(n + x) = *(n + i);
*(n + i) = temp;
}
}
