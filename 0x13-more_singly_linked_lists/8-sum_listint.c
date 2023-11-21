# include "lists.h"
/**
 * sum_listint - it calculates the sum of the datas in a linked list
 * @head: pointer to the 1st node in the linked list
 * Return: sum of the element data in the linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
