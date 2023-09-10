#include "main.h"

/**
 * _sqrt_recursive - A recursive helper function to find the square root.
 * @n: The number for which to find the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The square root if found, otherwise -1.
 */
int _sqrt_recursive(int n, int guess)
{
	int square = guess * guess;

	if (square == n)
		return guess;
	if (square > n || guess > n / guess)
		return -1;

	return _sqrt_recursive(n, guess + 1);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * Return: The square root if found, otherwise -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;

	return _sqrt_recursive(n, 0);
}

