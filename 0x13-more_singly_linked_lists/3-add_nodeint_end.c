#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element
 * @n: value for new element
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_no;
	listint_t *node = *head;

	new_no = malloc(sizeof(listint_t));
	if (!new_no)
		return (NULL);

	new_no->n = n;
	new_no->next = NULL;

	if (*head == NULL)
	{
		*head = new_no;
		return (new_no);
	}

	while (node->next)
		node = node->next;

	node->next = new_no;

	return (new_no);
}
