#include "lists.h"

/**
 * sum_listint - Calculate the sum of all the data in a listint_t list
 * @head: Pointer to the first node in the linked list.
 *
 * Return: Resulting sum, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	for (listint_t *temp = head; temp != NULL; temp = temp->next)
	{
		sum += temp->n;
	}

	return (sum);
}
