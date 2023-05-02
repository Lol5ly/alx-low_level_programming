#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 *
 * Return: print
 */

void puts2(char *str)
{
	int o;

	for (o = 0 ; str[o] != '\0' ; o++)
	{
	if (o % 2 == 0)
	_putchar(str[o]);
	}
	_putchar('\n');
}
