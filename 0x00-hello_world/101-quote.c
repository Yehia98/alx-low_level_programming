#include <stdio.h>
#include <unistd.h>
/**
 * main - A program prints a line into the standard error
 * Return: 1 (success)
 */
int main(void)
{
	fput("and that piece of art is useful\" - Dora Korpar, 2015-10-19\r", stdout);
	return (1);
}
