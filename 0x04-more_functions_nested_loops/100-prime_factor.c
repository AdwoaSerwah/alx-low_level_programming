#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Description: This program finds and prints the largest prime number
 * of a number followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long num = 1231952, i = 2, prime_fact = 1, temp = num;

	while (i <= num)
	{
		if (num % i == 0)
		{
			num = num / i;
			if (i > prime_fact)
			{
				prime_fact = i;
			}
			i = 2;
		}
		else
			i++;
	}
	if (prime_fact == 1)
	{
		prime_fact = temp;
	}
	printf("%lu\n", prime_fact);
	return (0);
}
