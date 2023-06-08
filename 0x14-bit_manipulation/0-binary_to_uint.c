#include "main.h"

/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: the binary number
 *
 * Return: theform of b
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int number = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		number = 2 * number + (b[x] - '0');
	}

	return (number);
}
