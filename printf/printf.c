#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * _fputchar - Prints a character
 * @c: The character to print
 *
 * Return: Always 1 (Number od characters printed)
 */
int _fputchar(int c)
{
	write(STDOUT_FILENO, &c, 1);
	return (1);
}

/**
 * print_str - Prints a string
 * @str: The string to print
 *
 * Return: len (The number of characters printed)
 */
int print_str(char *str)
{
	int len = 0;

	if (*str == '\0')
		str = "(nil)";
	while (*str != '\0')
	{
		_fputchar(*str);
		str++;
		len++;
	}
	return (len);
}

/**
 * format_specifier - Handles a format specifier
 * @format: Pointer to the current position in the format string
 * @akk: Argument list
 *
 * Return: The number of characters printed
 */
int format_specifier(const char **format, va_list akk)
{
	(*format)++;
	if (**format == '\0')
		return (0);
	if (**format == '%')
		return (_fputchar(**format));
	else if (**format == 'c')
	{
		char ch = va_arg(akk, int);

		return (_fputchar(ch));
	}
	else if (**format == 's')
	{
		char *s = va_arg(akk, char *);

		return (print_str(s));
	}
	else
	{
		_fputchar('%');
		_fputchar(**format);
		return (2);
	}

}

/**
 * _printf - Produces output according to a format
 * @format: Character string
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list akk;
	int len = 0;

	va_start(akk, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			len += format_specifier(&format, akk);
		}
		else
		{
			len += _fputchar(*format);
		}
		format++;
	}
	va_end(akk);
	return (len);
}
