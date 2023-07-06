#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string of the binary number
 *
 * Return: number converted
 */
unsigned int binary_to_uint(const char *b)
{
	int p;
	unsigned int dec_v = 0;

	if (!b)
		return (0);

	for (p = 0; b[p]; p++)
	{
		if (b[p] < '0' || b[p] > '1')
			return (0);
		dec_v = 2 * dec_v + (b[p] - '0');
	}
	return (dec_v);
}
