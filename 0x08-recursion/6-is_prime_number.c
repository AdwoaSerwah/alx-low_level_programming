#include "main.h"

/**
 * is_prime_recursive - A recursive helper function to check if a number is prime.
 * @n: The number to check for primality.
 * @divisor: The current divisor being tested.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
    if (n <= 1)
        return 0;
    if (divisor < 2)
        return 1;

    if (n % divisor == 0)
        return 0;
    else
        return is_prime_recursive(n, divisor - 1);
}

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The number to check for primality.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
    if (n <= 1)
        return 0;

    return is_prime_recursive(n, n / 2);
}

