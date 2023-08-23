#include "main.h"

/**
 * puts_half - Prints half of a string followed by a new line.
 * @str: Pointer to the string
 */
void puts_half(char *str)
{
	int length = 0;
	int n;

	while (str[length] != '\0')
		length++;

	n = length / 2;
	if (length % 2 == 0)
	{
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		n = n + 1;
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
