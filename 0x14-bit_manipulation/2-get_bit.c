#include "main.h"

/**
 * get_bit - returns the value of a bit number
 * @n: number to index
 * @index: the index
 *
 * Return: the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int num;

	if (index > 63)
		return (-1);

	num = (n >> index) & 1;

	return (num);
}
