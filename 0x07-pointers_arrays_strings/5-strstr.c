#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string being searched
 * @needle: substring
 * Return: needle or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
