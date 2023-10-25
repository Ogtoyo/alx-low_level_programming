#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: A pointer to a pointer to the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
		len++;
	}

	*h = NULL;

	return (len);
}
