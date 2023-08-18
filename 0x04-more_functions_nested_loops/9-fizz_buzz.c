#include "main.h"

/**
 * main - Entry point
 *
 * Description: This program prints 1 to 100 followed by a new line
 * When the number is multiple of 3 or 5, it prints Fizz or Buzz respectively
 * When number is a multiple of both 3 and 5, it prints FizzBuzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n  = 1;

	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%d", n);
		if (n != 100)
			printf(" ");
		n++;
	}
	printf("\n");
	return (0);
}
