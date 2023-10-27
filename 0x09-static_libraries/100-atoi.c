#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: string
 * Return: integer converted from the string
 */

int _atoi(char *s)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	if (s[0] == '-')
	{
	sign = -1;
	i = 1;
	}

	for (; s[i] != '\0'; ++i)
	{

	if (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + (s[i] - '0');
	}
	else
	{
	break;
	}
	}

	return sign * res;
}
