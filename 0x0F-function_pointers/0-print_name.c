#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: Name to print
 * @f: Pointer to the function p
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
