#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Description: This program finds and prints the largest prime number
 * of a number followed by a new line.
 * Return: Always 0 (Success)
 */
#include <stdio.h>
#include <math.h>

int largest_prime_factor(long number, int divisor)
{
	if (number % divisor == 0)
	{
		if (number == divisor)
		{
			return number;
		}
		else
		{
			return largest_prime_factor(number / divisor, divisor);
		}
	}
	else
	{
		return largest_prime_factor(number, divisor + 1);
	}
}

int main(void)
{
	long number = 612852475143L;

	int result = largest_prime_factor(number, 2);

	printf("%d\n", result);

	return (0);
}
