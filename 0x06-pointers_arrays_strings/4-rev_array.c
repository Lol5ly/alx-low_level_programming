#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, h, t;

	for (i = 0, h = (n - 1); i < h; i++, h--)
	{
		t = a[i];
		a[i] = a[h];
		a[h] = t;
	}
}

