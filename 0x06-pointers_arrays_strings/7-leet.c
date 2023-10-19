#include "main.h"

/**
 * leet - encode a string into 1337
 * @a: string executed
 * Return: encoded string
 */

char *leet(char *a)
{
	int i, j;
	char *s = "aAeEoOtTlL";
	char *y = "4433007711";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] == s[j])
				a[i] = y[j];
		}
	}
	return (a);
}
