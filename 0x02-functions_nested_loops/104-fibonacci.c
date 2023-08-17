#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 *#include <stdio.h>
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int c = 0;

	printf("%lu, %lu, ", a, b);

	while (c < 2942588539565114921ul)
	{
		c = a + b;
		a = b;
		b = c;

		if (c <= 2942588539565114921ul)
		{
			if (c == 2942588539565114921ul)
			{	
				printf("%lu\n", c);
			}
			else
			{
				printf("%lu, ", c);
			}
		}
	}

	return (0);
}
