#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to the first node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *n;

	while (head)
	{
		n = head->next;
		free(head);
		head = n;
	}
}
