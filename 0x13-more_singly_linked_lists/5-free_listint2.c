#include "lists.h"

/**
 * free_listint2 - Free a linked list and sets the head to NULL
 * @head: Pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	while (*head)
	{
		listint_t *current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}
}
