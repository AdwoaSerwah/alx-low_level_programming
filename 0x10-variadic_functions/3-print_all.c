#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/* Define a typedef for the function pointer type */
typedef void (*print_func_t)(va_list);

/**
 * print_char - Print a character.
 * @args: A va_list containing the character to print.
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Print an integer.
 * @args: A va_list containing the integer to print.
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Print a float.
 * @args: A va_list containing the float to print.
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Print a string (or "(nil)" if NULL).
 * @args: A va_list containing the string to print.
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - Print anything based on a format string.
 * @format: A format string indicating the types of arguments.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *sep = "";

	/* Update the function pointer array */
	print_func_t print_funcs[] = {
		print_char,
		print_int,
		print_float,
		print_string};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4 && format[i] != "cifs"[j])
			j++;

		if (j < 4)
		{
			printf("%s", sep);
			print_funcs[j](args);
			sep = ", ";
		}

		i++;
	}

	va_end(args);
	printf("\n");
}

