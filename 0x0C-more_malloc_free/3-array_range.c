#include <stdlib.h>
#include "main.h"
/**
* *array_range - creates an array of integers
* @min: starting int
* @max: maximum int
*
* Return: pointer to the new array
*/
int *array_range(int min, int max)
{
int *ptr;
int i, len1;
if (min > max)
return (NULL);
len1 = max - min + 1;
ptr = malloc(sizeof(int) * len1);
if (ptr == NULL)
return (NULL);
for (i = 0; min <= max; i++)
ptr[i] = min++;
return (ptr);
}
