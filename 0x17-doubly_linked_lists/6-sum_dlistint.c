#include "lists.h"

/**
 * sum_dlistint - sum of all nodes of doubly linkedlist
 * @head: head
 * Return: return the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	if (!head)
		return (0);

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
