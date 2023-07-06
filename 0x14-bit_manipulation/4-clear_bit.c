#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n:the number to change
 * @ind: index of the bit to clear
 *
 * Return: 1 if success, -1 if failure
 */
int clear_bit(unsigned long int *n, unsigned int ind)
{
	if (ind > 63)
		return (-1);

	*n = (~(1UL << ind) & *n);
	return (1);
}
