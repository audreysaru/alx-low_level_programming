#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string being searched
 * @needle: substring
 * Return: needle or NULL
 */

#include <stdio.h>

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
	char *start = haystack;
	char *sub = needle;

	while (*haystack && *sub && *haystack == *sub)
	{
		haystack++;
		sub++;
	}

	if (!*sub)
	{
		return (start);
	}
	haystack = start + 1;
	}

	return (NULL);
}

int main()
{
	char haystack[] = "Hello, this is a sample string.";
	char needle[] = "is";

	char *result = _strstr(haystack, needle);

	if (result)
	{
	printf("Substring found: %s\n", result);
	}
	else
	{
	printf("Substring not found.\n");
	}

	return (0);
}

