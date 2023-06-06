#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: pointer to the first node
 *
 * Return: pointer to the node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre_n = NULL;
	listint_t *next_n = NULL;

	while (*head)
	{
		next_n = (*head)->next;
		(*head)->next = pre_n;
		pre_n = *head;
		*head = next_n;
	}

	*head = pre_n;

	return (*head);
}
