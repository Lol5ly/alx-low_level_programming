#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;

	do {
		l++;
		dest[l] = src[l];
	} while (src[l] != '\0');
	return (dest);
}
