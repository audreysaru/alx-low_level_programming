#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: Unsigned long integer to be printed as binary
 * Description: This function prints the binary representation of an unsigned
 * long integer without using % or / operators or arrays.
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask > 0)
	{
		if ((n & mask) || flag)
		{
			if (n & mask)
			{
				_putchar('1');
				flag = 1;
			}
			else
			{
				_putchar('0');
			}
		}
	mask = mask >> 1;
	}
}
