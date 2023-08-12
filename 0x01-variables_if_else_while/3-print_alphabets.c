#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the alphabets in lowercase
 * and then in uppercase followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase_alphabet;
	char uppercase_alphabet;

	lowercase_alphabet = 'a';
	while (lowercase_alphabet <= 'z')
	{
		putchar(lowercase_alphabet);
		lowercase_alphabet++;
	}

	uppercase_alphabet = 'A';
	while (uppercase_alphabet <= 'Z')
	{
		putchar(uppercase_alphabet);
		uppercase_alphabet++;
	}
	putchar('\n');
	return (0);
}
