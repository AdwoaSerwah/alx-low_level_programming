#include "lists.h"

/**
 * _putchar - Prints a character
 * @c: Character to be printed
 *
 * Return: 1
 */

int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
