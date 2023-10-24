#include "lists.h"

/**
 * print_listint - Prints the elements of a list of integers.
 * @h: A pointer to the head of the list.
 *
 * This function prints the integer elements of a singly linked list.
 * Itraverses the list, prints each element followed by a newline.
 *
 * Return: The number of nodes (elements) in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
