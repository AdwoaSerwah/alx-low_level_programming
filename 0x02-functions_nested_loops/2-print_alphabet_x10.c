#include "main.h"
/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times,
 * followed by newline.
 *
 * Return: None
 */
void print_alphabet_x10(void)
{
	int i = 1;
	char letter;

	while (i <= 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}
		putchar('\n');
		i++;
	}
}
