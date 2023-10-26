#include "main.h"

/**
 * is_prime_number - returns prime numbers
 * @n: number
 * @i: variable
 * Return: int
 */

int is_prime_number(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}

	if (n <= 3)
	{
		return (1);
	}

	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}

	if (n % i == 0 || n % (i + 2) == 0)
	{
		return (0);
	}

	/**
	* while (i * i <= n)
	* {
	*	if (n % i == 0 || n % (i + 2) == 0)
	*	{
	*		return (0);
	*	}
	* i += 6;
	* }
	*/

	return (1);
}
