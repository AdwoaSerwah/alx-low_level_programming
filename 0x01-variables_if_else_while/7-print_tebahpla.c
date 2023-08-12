#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the lowercase alphabets
 * in reverse using the putchar function.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
