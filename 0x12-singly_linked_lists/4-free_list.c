#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees  nodes of a list
 * @head: list to be freed
 * Return: freesing nodes of list
 */
void free_list(list_t *head)
{
list_t *N;
while (head)
{
N = head->next;
free(head->str);
free(head);
head = N;
}
}
