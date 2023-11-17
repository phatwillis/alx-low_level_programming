#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to the head of the linked list.
 * @str: The string to store in the new node.
 *
 * Return: A pointer to the updated head of the list.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t str_len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (str_len = 0; str[str_len]; str_len++)
		;

	new_node->len = str_len;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

