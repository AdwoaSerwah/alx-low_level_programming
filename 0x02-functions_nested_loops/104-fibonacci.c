#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long a = 1, b = 2, sum = 0, i = 2;

	printf("%lu, %lu", a, b);

	while (i < 98)
	{
		sum = a + b;
		printf(", %lu", sum);
		a = b;
		b = sum;
		i++;
	}
	printf("\n");

	return (0);
}
