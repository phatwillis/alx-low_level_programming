#include "lists.h"
/**
 * pop_listint - it deletes the head node of a linked list.
 * @head: pointer to the 1st node of the linked list
 * Return: data inside the elements that was deleted,
 * or 0 if the list is empty()
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int head_data;

	if (!head || !*head)
		return (0);

	head_data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (head_data);
}
