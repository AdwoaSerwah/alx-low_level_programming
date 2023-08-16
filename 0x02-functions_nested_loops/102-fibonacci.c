#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 50; /* Number of Fibonacci numbers to print */
	long first = 1, second = 2, next;
	int i = 2;

	printf("%ld, %ld", first, second);

	while (i < n)
	{
		next = first + second;
		printf(", %ld", next);
		first = second;
		second = next;
		i++;
	}

	printf("\n");

	return (0);
}
