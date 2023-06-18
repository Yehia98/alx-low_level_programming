#include <stdio.h>
/**
 * main - printing the alphabet.
 * Description: A program that prints the alphabet.
 * Return: Always 0 (success).
 */
int main(void)
{
	int a = 'a';
	int A = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
	/*putchar('\n');*/
return (0);
}
