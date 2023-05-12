#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c;
	int h;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	h = 0;
	while (h < n && src[h] != '\0')
	{
	dest[c] = src[h];
	c++;
	h++;
	}
	dest[c] = '\0';
	return (dest);
}
