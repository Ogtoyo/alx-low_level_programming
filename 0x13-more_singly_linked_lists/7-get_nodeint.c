#include "lists.h"

/**
 * get_nodeint_at_index - Retrieves a node from a listint_t list at a given index.
 * @head: A pointer to the head of the list.
 * @index: The index of the node to retrieve.
 *
 * Return: A pointer to the node at the specified index, or NULL if not found.
 *
 * Description: This function traverses a listint_t list to retrieve the node
 * at the specified index. If the index is out of range, or the list is too short,
 * it returns NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}

	return (head);
}
