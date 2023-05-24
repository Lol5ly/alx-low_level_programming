#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code that printsits own the opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int b, x;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (x = 0; x < b; x++)
	{
		if (x == b - 1)
		{
			printf("%02hhx\n", arr[x]);
			break;
		}
		printf("%02hhx ", arr[x]);
	}
	return (0);
}
