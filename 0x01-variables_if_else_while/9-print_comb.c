#include <stdio.h>

/**
 * main - prints possible combinations of single digits
 *
 * Return: alwasy 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 9)
			putchar(i + '0');
		else
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}