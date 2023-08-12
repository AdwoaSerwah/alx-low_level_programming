#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the alphabets in lowercase
 * which is followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
