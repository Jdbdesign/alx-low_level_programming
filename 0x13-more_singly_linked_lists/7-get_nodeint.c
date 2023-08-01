#include "lists.h"

/**
 * get_nodeint_at_index - Return the nth node of the listint_t linked list.
 * @head: Pointer to the first node in the linked list.
 * @index: Index of the node to return (starting at 0).
 *
 * Return: Pointer to the node we are looking for, or NULL if the node does not
 * exit.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (head != NULL && index > 0)
	{
		head = head->next;
		index--;
	}

	return (head);
}
