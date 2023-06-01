#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: the pointer to the head node
 * @str: string to put in the node
 * Return: adress of the new element, new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *len = *head;

	unsigned int l = 0;

	while (str[l])
	l++;
	new_node = malloc(sizeof(list_t));
	if (!new_node)
	return (NULL);
	new_node->str = strdup(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}
	while (len->next)
	len = len->next;
	len->next = new_node;
	return (new_node);
}
