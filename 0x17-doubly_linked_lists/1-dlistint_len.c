#include "lists.h"

/**
 * dlistint_len - gets the length of linkedlist
 * @h: head
 * Return: number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
		h = h->next, len++;

	return (len);
}
