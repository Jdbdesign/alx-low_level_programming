#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;
	const listint_t *current_node = h;

	while (current_node)
	{
		num_nodes++;
		current_node = current_node->next;
	}

	return (num_nodes);
}
