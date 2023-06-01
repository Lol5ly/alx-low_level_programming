#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of the list
 * @head: the pointer to the list_t list
 * @str: new string  in node
 *
 * Return: adding the new element, new node
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *node;
unsigned int len = 0;
while (str[len])
len++;
node = malloc(sizeof(list_t));
if (!node)
return (NULL);
node->str = strdup(str);
node->len = len;
node->next = (*head);
(*head) = node;
return (*head);
}
