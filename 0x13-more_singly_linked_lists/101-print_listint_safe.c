#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head
 *
 * Return: If the list is not looped - 0.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *temp, *lint;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	temp = head->next;
	lint = (head->next)->next;

	while (lint)
	{
		if (temp == lint)
		{
			temp = head;
			while (temp != lint)
			{
				nodes++;
				temp = temp->next;
				lint = lint->next;
			}

			temp = temp->next;
			while (temp != lint)
			{
				nodes++;
				temp = temp->next;
			}

			return (nodes);
		}

		temp = temp->next;
		lint = (lint->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num, i = 0;

	num = looped_listint_len(head);

	if (num == 0)
	{
		for (; head != NULL; num++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < num; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (num);
}
