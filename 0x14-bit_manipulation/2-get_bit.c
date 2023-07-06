#include "main.h"

/**
 * get_bit - returns the value of a bit
 * @n: number to search
 * @ind: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int ind)
{
	int bit_val;

	if (ind > 63)
		return (-1);

	bit_val = (n >> ind) & 1;

	return (bit_val);
}
