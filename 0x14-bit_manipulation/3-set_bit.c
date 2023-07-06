#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: the number to change
 * @ind: index of the bit to set to 1
 *
 * Return: 1 for success, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int ind)
{
	if (ind > 63)
		return (-1);

	*n = ((1UL << ind) | *n);
	return (1);
}
