#include <stdlib.h>
#include "main.h"

/**
 * exit_with_error - Print "Error" and exit with status 98.
 */
void exit_with_error(void)
{
	char *error_msg = "Error\n";
	int i = 0;

	while (error_msg[i])
	{
		_putchar(error_msg[i]);
		i++;
	}

	exit(98);
}

/**
 * is_digit - Check if a character is a digit.
 * @c: The character to check.
 *
 * Return: 1 if it's a digit, 0 otherwise.
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * str_len - Calculate the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
int str_len(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * initialize_result - Initialize an integer array with zeros.
 * @result: The integer array to initialize.
 * @size: The size of the array.
 */
void initialize_result(int *result, int size)
{
	int i = 0;

	while (i < size)
	{
		result[i] = 0;
		i++;
	}
}

/**
 * calculate_product - Calculate the product of two numbers.
 * @result: The result array to store the product.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 * @len1: The length of the first number.
 * @len2: The length of the second number.
 */
void calculate_product(int *result, char *num1, char *num2, int len1, int len2)
{
	int carry, product, temp, i, j;

	i = len1 - 1;
	while (i >= 0)
	{
		carry = 0;
		j = len2 - 1;
		while (j >= 0)
		{
			product = (num1[i] - '0') * (num2[j] - '0');
			temp = result[i + j + 1] + product + carry;
			result[i + j + 1] = temp % 10;
			carry = temp / 10;
			j--;
		}
		result[i] += carry;
		i--;
	}
}

/**
 * print_result - Print the result array.
 * @result: The result array to print.
 * @size: The size of the array.
 */
void print_result(int *result, int size)
{
	int i = 0;

	while (i < size && result[i] == 0)
		i++;

	if (i == size)
		_putchar('0');
	else
	{
		while (i < size)
		{
			_putchar(result[i] + '0');
			i++;
		}
	}

	_putchar('\n');
}

/**
 * multiply - Multiply two numbers represented as strings.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 */
void multiply(char *num1, char *num2)
{
	int len1 = str_len(num1);
	int len2 = str_len(num2);
	int *result;

	result = malloc(sizeof(int) * (len1 + len2));
	if (!result)
		exit(98);

	initialize_result(result, len1 + len2);
	calculate_product(result, num1, num2, len1, len2);
	print_result(result, len1 + len2);

	free(result);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	char *num1 = argv[1];
	char *num2 = argv[2];

	if (argc != 3)
		exit_with_error();
	while (*num1)
	{
		if (!is_digit(*num1))
			exit_with_error();
		num1++;
	}

	while (*num2)
	{
		if (!is_digit(*num2))
			exit_with_error();
		num2++;
	}

	multiply(argv[1], argv[2]);

	return (0);
}
