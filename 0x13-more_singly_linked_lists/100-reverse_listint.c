#include "lists.h"

/**
 * reverse_listint - Reverse a linked list
 * @head: Pointer to the first node in the list.
 *
 * Return: Pointer to the first node in the new list.
 */
listint_t *reverse_listint(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (NULL);

	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
	return (*head);
}