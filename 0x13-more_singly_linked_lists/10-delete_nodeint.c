#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a list at an index
 * @head: pointer to the first node in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node1 = *head;
	listint_t *node2 = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(node1);
		return (1);
	}

	while (i < index - 1)
	{
		if (!node1 || !(node1->next))
			return (-1);
		node1 = node1->next;
		i++;
	}


	node2 = node1->next;
	node1->next = node2->next;
	free(node2);

	return (1);
}
