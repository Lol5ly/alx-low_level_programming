#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data
 * @head: pointer to the first node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *i = head;

	while (i)
	{
		sum += i->n;
		i = i->next;
	}

	return (sum);
}
