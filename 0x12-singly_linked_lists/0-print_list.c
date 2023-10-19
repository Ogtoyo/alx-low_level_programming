#include "lists.h"

/**
 * print_list - Prints a list of strings with special formatting.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes (elements) in the list.
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
