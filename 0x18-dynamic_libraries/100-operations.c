#include "main.h"

/**
 * add - Adds
 * @a: First operand
 * @b: Second operand
 *
 * Return: a + b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts
 * @a: First operand
 * @b: Second operand
 *
 * Return: a - b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies
 * @a: First operand
 * @b: Second operand
 *
 * Return: a * b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides
 * @a: First operand
 * @b: Second operand
 *
 * Return: a / b
 */
int div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

/**
 * mod - Finds remainder
 * @a: First operand
 * @b: Second operand
 *
 * Return: a % b
 */
int mod(int a, int b)
{
	if (b == 0)
		return (0);

	return (a % b);
}
