#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string being searched
 * @needle: substring
 * Return: needle or NULL
 *
 */

char *_strstr(char *haystack, char *needle)
{
	char *sub;
	char *h;

	while (*haystack)
	{
	sub = needle;
	h = haystack;

	while (*sub && *sub == *h)
	{
		sub++;
		h++;
	}

	if (*sub == '\0')
	{
	return (haystack);
	}

	haystack++;
	}

	return (NULL);
}

