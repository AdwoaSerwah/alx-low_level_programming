#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 98;
	int count = 2;
	int first = 1, second = 2, next;

	printf("%d, %d", first, second);

	while (count < n)
	{
		next = first + second;
		printf(", %d", next);
		first = second;
		second = next;
		count++;
	}

	printf("\n");

	return (0);
}
