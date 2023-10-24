#include "lists.h"

/**
 * listint_len - Counts the number of nodes in a list of integers.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes (elements) in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
