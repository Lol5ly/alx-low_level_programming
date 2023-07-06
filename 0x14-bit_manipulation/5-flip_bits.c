#include "main.h"

/**
 * flip_bits - counts number of bits to change
 * @n: first number
 * @s: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int s)
{
	int j, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ s;

	for (j = 63; j >= 0; j--)
	{
		current = exclusive >> j;
		if (current & 1)
			count++;
	}

	return (count);
}
