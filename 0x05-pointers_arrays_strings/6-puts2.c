#include "main.h"

/**
 * puts2 - Prints every other character followed by a new line,
 * starting from the first character
 * @str: Pointer to the string to manipulate
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
