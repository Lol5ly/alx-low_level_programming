#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * change one number to another
 *
 * @n: first num
 * @m: second num
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int p, count = 0;
	unsigned long int curr;
	unsigned long int temp = n ^ m;

	for (p = 63; p >= 0; p--)
	{
		curr = temp >> p;
		if (curr & 1)
			count++;
	}

	return (count);
}
