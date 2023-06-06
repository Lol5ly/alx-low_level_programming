#include "lists.h"

/**
 * pop_listint - pops the head node of a list
 * @head: pointer to the first node
 *
 * Return: void
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int x;

	if (!head || !*head)
		return (0);

	x = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;

	return (x);
}
