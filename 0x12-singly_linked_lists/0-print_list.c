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
	int i;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[");
			for (i = 0; h->str[i]; i++)
			{
				if ((h->str[i] > 0 && h->str[i] < 32) || h->str[i] >= 127)
				{
					printf("\\x%02X", h->str[i]);
				}
				else
				{
					putchar(h->str[i]);
				}
			}
			printf("]\n");
		}
		h = h->next;
		nodes++;
	}
	return (nodes);
}
