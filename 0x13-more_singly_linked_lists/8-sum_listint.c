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

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
