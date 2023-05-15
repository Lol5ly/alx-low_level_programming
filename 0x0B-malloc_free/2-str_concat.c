#include "main.h"
#include <stdlib.h>
/**
* str_concat - get ends of input and add together for size
* @s1: input one to concat
* @s2: input two to concat
* Return: concat of s1 and s2
*/
char *str_concat(char *s1, char *s2)
{
char *conct;
int i, m;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
i = m = 0;
while (s1[i] != '\0')
i++;
while (s2[m] != '\0')
m++;
conct = malloc(sizeof(char) * (i + m + 1));
if (conct == NULL)
return (NULL);
i = m = 0;
while (s1[i] != '\0')
{
conct[i] = s1[i];
i++;
}
while (s2[m] != '\0')
{
conct[i] = s2[m];
i++, m++;
}
conct[i] = '\0';
return (conct);
}
