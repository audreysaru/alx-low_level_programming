#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @a: string to be capitalized
 * Return: string
 */

char *cap_string(char *a)
{
	int i, j;
	char sp[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; a[i] != '\0'; i++)
	{
		if (i == 0 && a[i] >= 'a' && a[i] <= 'z')
			a[i] = a[i] - 32;
		for (j = 0; j < 13; j++)
		{
			if (a[i] == sp[j])
			{
				if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
					a[i + 1] = a[i +1] - 32;
			}
		}
	}
	return (a);
}
