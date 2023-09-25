#include <unistd.h>
#include <lists.h>

/**
 * _putchar - Prints a character to standard output
 * @c: Character to print
 *
 * Return: 1 (Success)
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
