#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: pointer to the first node
 *
 * Return: number of nodes in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int ptr;
	listint_t *loop;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		ptr = *h - (*h)->next;
		if (ptr > 0)
		{
			loop = (*h)->next;
			free(*h);
			*h = loop;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
