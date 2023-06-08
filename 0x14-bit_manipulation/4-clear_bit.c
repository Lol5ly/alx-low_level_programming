#include "main.h"

/**
 * clear_bit - clears the given bit
 * @n: pointe to the number
 * @index: bit to clear
 *
 * Return: 1 for success, -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1L << index) & *n);
	return (1);
}
