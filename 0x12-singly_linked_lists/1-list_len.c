#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the elements in the list
 * @h: pointer to the list_t
 *
 * Return: the size of the list
 */
size_t list_len(const list_t *h)
{
size_t x = 0;
while (h)
{
x++;
h = h->next;
}
return (x);
}
