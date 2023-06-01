#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of the list
 * @head: the pointer to the list_t list
 * @str: new str to add in node
 *
 * Return: adding the new element, new node
 */
list_t *new_node(list_t **head, const char *str)
{
 list_t *new_node;
 unsigned int l = 0;

 while (str[l])
 l++;

 new_node = malloc(sizeof(list_t));
 if (!new_node)
 return (NULL);

 new_node->str = strdup(str);
 new_node->next = (*head);
 *head = new_node;
return (new_node);
}
