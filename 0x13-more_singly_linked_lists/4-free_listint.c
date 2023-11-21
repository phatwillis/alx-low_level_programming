#include "lists.h"
/**
 * free_listint - it frees a linked lists
 * @head: pointer to the first node of the linked lists to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
