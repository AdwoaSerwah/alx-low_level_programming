#include <stdio.h>

/**
 * main - Calculates and prints the sum of even Fibonacci terms below 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int limit = 4000000; /* Upper limit for Fibonacci values */
	long first = 1, second = 2, next, sum = 0;

	while (second <= limit)
	{
		if (second % 2 == 0)
		{
			sum += second;
		}

		next = first + second;
		first = second;
		second = next;
	}

	printf("Sum of even-valued Fibonacci terms below 4,000,000: %ld\n", sum);

	return (0);
}
