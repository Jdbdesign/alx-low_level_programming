#include "lists.h"

/**
 * free_listint_safe - Frees a linked list.
 * @h: Pointer to the first node in the linked list.
 *
 * Return: Number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *temp, *current;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h)
	{
		current = *h;
		temp = (*h)->next;
		*h = temp;
		free(current);
		len++;
		if (current <= temp)
			break;
	}

	*h = NULL;

	return (len);
}
