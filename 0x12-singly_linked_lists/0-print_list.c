#include "lists.h"
#include <stdio.h>

/**
 * print_list - a function that prints the lists of the nodes
 * @head: The head of the node
 * Return: 0 always
 */


size_t print_list(const list_t *head)
{
	size_t i;

	for (i = 0; head != NULL; i++)
	{
		if (head->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
		{
			printf("[%u] %s\n", head->len, head->str);
		}
		head = head->next;
	}
	return (i);
}
