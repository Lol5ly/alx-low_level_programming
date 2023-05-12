#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int c;
	int h;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	h = 0;
	while (src[h] != '\0')
	{
		dest[c] = src[h];
		c++;
		h++;
	}

	dest[c] = '\0';
	return (dest);
}
