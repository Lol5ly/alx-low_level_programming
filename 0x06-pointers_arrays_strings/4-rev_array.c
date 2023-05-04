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
	int c;
	int t;

	for (c = 0; i < n--; c++)
	{
		t = a[c];
		a[c] = a[n];
		a[n] = t;
	}
}

