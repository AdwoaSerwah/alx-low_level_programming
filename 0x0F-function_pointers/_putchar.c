#include <unistd.h>
#include "function_pointers.h"

/**
 * _putchar - Prints a character to standard output
 * @c: Character to print
 *
 * Return: A character displayed to standard output
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
