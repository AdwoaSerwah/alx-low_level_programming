#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a new line
 * @separator: String to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)

{
	va_list ap;
	unsigned int i;

	i = 0;
	va_start(ap, n);

	while (i < n)
	{
		char *s = va_arg(ap, char *);

		if (s == NULL)
			printf("(nil)");
		else
		{
			printf("%s", s);
		}
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
}
