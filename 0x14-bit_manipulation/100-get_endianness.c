#include "main.h"

/**
 * get_endianness - checks endianness
 * Return: 0 if big, 1 if small
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *x = (char *) &j;

	return (*x);
}

