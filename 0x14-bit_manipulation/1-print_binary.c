#include "main.h"

/**
 * print_binary - prints the binary number
 * @n: binary print number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int x, num = 0;
	unsigned long int count;

	for (x = 63; x >= 0; x--)
	{
		count = n >> x;

		if (count & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
