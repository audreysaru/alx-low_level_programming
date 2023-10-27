#include "main.h"

/**
 * is_divisible - Helper function to check if n is divisible by m.
 * @n: The number to be checked for divisibility.
 * @a: The divisor to check.
 * Return: 1 if divisible, 0 if not.
 */

int is_divisible(int n, int a)
{
	if (a * a > n)
	{
	return (1);
	}

	if (n % a == 0)
	{
	return (0);
	}

	return (is_divisible(n, a + 1));
}

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to check for primality.
 * Return: 1 if prime, 0 if not.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0);
	}

	if (n <= 3)
	{
	return (1);
	}

	return (is_divisible(n, 2));
}
