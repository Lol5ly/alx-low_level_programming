#include <stdlib.h>
#include "main.h"
/**
* *_memset - fills memory with a constant byte
* @s: memory area to be filled
* @b: char to copy
* @n: number of times to copy b
*
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int j;
for (j = 0; j < n; j++)
{
s[j] = b;
}
return (s);
}

/**
* *_calloc - allocates memory for an array
* @nmemb: array length
* @size: size of each element
*
* Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *x;
if (nmemb == 0 || size == 0)
return (NULL);
x = malloc(size * nmemb);
if (x == NULL)
return (NULL);
_memset(x, 0, nmemb * size);
return (x);
}
