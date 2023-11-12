#include "main.h"

/**
 * array_range - array of integers
 * @min: minumum
 * @max: maximum
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int size, i;
	int *output;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	output = malloc(sizeof(int) * size);
	if (output == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		output[i] = min++;
	return (output);
}
