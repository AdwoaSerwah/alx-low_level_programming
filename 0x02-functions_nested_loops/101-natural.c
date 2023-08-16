#include <stdio.h>

/**
 * main - Computes and prints the sum of multiples of 3 or 5 below 1024
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0;
	int i = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}

	printf("The sum of the multiples of 3 or 5 below 1024 is: %d\n", sum);

	return (0);
}
