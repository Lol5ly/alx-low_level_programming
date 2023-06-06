#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index
 * @head: pointer to the first node
 * @index: index of the node
 *
 * Return: pointer to the node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int p = 0;
	listint_t *Node = head;

	while (Node && p < index)
	{
		Node = Node->next;
		p++;
	}

	return (Node ? Node : NULL);
}
