#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: This program prints the alphabets in lowercase,
 * followed by a newline
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
