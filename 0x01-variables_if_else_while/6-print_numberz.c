#include <stdio.h>

/**
 * main - print single digit numbers
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar ('\n');
	return (0);
}
