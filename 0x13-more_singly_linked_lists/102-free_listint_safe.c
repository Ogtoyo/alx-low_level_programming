#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: A pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *temp;

	while (*h != NULL)
	{
		if (*h <= (*h)->next)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			size++;
			break;
		}
		else
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			size++;
		}
	}

	*h = NULL;
	return size;
}
