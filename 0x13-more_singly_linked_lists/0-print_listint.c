#include "lists.h"

/**
 * print_listint - prints the elements of a linked lists
 * @h: ponter to the node
 *
 * Return: number of nodes -size
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}

	return (x);
}
