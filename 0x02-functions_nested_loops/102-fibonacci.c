#include <stdio.h>
/**
* main - prints the first 50 Fibonacci numbers.
* Description: a program that prints the first 50 Fibonacci numbers.
* Return: Always 0 (success).
*/
int main(void)
{
int i;
unsigned long num1 = 0, num2 = 1, sum;

for (i = 0; i < 50; i++)
{
sum = num1 + num2;
printf("%lu", sum);
num1 = num2;
num2 = sum;
if (i == 49)
{
printf("\n");
}
else
printf(", ");
}
return (0);
}
