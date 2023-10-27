#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: error or 1
 */

int main(int argc, char *argv[])
{
	int i, j, mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);

		mul = i * j;
		printf("%d\n", mul);
	}
	return (0);
}
