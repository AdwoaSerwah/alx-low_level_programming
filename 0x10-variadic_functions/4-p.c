#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything
 * @format: List of types of arguments passed to the function
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "";
	int i = 0;

	va_start(args, format);
	while (format && format[i])
	{
		int print_flag = 1;

		if (format[i] == 'c')
		{
			printf("%s%c", separator, va_arg(args, int));
		}
		else if (format[i] == 'i')
		{
			printf("%s%i", separator, va_arg(args, int));
		}
		else if (format[i] == 'f')
		{
			printf("%s%f", separator, va_arg(args, double));
		}
		else if (format[i] == 's')
		{
			char *str = va_arg(args, char *);

			if (str == NULL)
				str = "(nil)";
			printf("%s%s", separator, str);
		}
		else
		{
			print_flag = 0;
		}

		if (print_flag)
			separator = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
