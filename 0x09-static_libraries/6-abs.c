#include "main.h"

/**
 * _abs - prints absolute value
 * @a: parameter to be checked
 * Return: always 0
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else
		return (a);
}
