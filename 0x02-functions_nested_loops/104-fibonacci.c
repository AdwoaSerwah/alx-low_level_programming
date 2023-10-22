#include <stdio.h>
#define LIMIT 10000000000

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long carry1 = 0, a = 1, carry2 = 0, b = 2, t1, sum, t2, i = 2;

	printf("%lu, %lu", a, b);
	while (i < 98)
	{
		if (a + b > LIMIT || carry2 > 0 || carry1 > 0)
		{
			t1 = (a + b) / LIMIT;
			sum = (a + b) % LIMIT;
			t2 = carry1 + carry2 + t1;
			carry1 = carry2, carry2 = t2;
			a = b, b = sum;
			printf(", %lu%010lu", carry2, b);
		}
		else
		{

			sum = a + b;
			printf(", %lu", sum);
			a = b, b = sum;
		}
		i++;
	}
	printf("\n");
	return (0);
}
