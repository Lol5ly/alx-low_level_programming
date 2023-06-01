#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the elements of a list
 * @h: pointer to the list_t to print
 *
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
size_t z = 0;

while (h)
{
	if (!h->str)
	printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	z++;
}
return (z);
}
