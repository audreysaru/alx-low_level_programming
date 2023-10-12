#include "main.h"

/**
 * times_table - prints 9 times table
 * Return: void
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 1; j++)
		{
			result = i * j;
			_putchar(result + '0');
		}
	}
	_putchar('\n');
}
