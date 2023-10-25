#include "lists.h"

/**
 * free_listint_safe - Frees a linked list of type listint_t.
 * @h: A pointer to a pointer to the head of the list.
 *
 * Return: The number of nodes that were freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *temp;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		if (current <= current->next)
		{
			temp = current->next;
			free(current);
			current = temp;
			count++;
		}
		else
		{
			free(current);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}
