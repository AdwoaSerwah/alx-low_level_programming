#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Print a variable number of arguments based on a format string.
 * @format: Format string indicating the types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		char c = format[i];

		if (c == 'c')
		{
			printf("%s%c", separator, va_arg(args, int));
		}
		else if (c == 'i')
		{
			printf("%s%d", separator, va_arg(args, int));
		}
		else if (c == 'f')
		{
			printf("%s%f", separator, va_arg(args, double));
		}
		else if (c == 's')
		{
			char *str = va_arg(args, char *);

			if (str == NULL)
				printf("%s(nil)", separator);
			else
				printf("%s%s", separator, str);
		}

		separator = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}
