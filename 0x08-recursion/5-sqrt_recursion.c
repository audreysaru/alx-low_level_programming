#include "main.h"

int find_sqrt(int n, int i);

/**
 * _sqrt_recursion - returns square  root of a number
 * @n: number
 * Return: square root of
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - Helper function to find the square root recursively
 * @n: The number to find the square root of
 * @i: The current guess for the square root
 * Return: The square root of
 */

int find_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (find_sqrt(n, i + 1));
}
