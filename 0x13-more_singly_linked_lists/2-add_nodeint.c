#include "lists.h"

/**
 * add_nodeint - adds a new node at a linked list
 * @head: pointer to the first node
 * @n: value of new node
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_no;

	new_no = malloc(sizeof(listint_t));
	if (!new_no)
		return (NULL);

	new_no->n = n;
	new_no->next = *head;
	*head = new_no;

	return (new_no);
}
