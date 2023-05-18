#include <stdlib.h>
#include "main.h"
/**
* *string_nconcat - concatenates n bytes of a string to another string
* @s1: string to append to
* @s2: string to concatenate from
* @n: number of bytes from s2 to concatenate to s1
*
* Return: pointer to the resulting string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i = 0, h = 0, len = 0, len1 = 0;
while (s1 && s1[len1])
len++;
while (s2 && s2[len1])
len1++;
if (n < len1)
s = malloc(sizeof(char) * (len + n + 1));
else
s = malloc(sizeof(char) * (len + len1 + 1));
if (!s)
return (NULL);
while (i < len)
{
s[i] = s1[i];
i++;
}
while (n < len1 && i < (len + n))
s[i++] = s2[h++];
while (n >= len1 && i < (len + len1))
s[i++] = s2[h++];
s[i] = '\0';
return (s);
}
