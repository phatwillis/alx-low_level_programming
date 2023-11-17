#include "lists.h"

/**
 * print_list - Prints the elements of a linked list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		printf("[%d] %s\n", (h->str ? h->len : 0), (h->str ? h->str : "(nil)"));
		h = h->next;
		node_count++;
	}

	return (node_count);
}

