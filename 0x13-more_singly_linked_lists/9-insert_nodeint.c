#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in list.
 * @head: A pointer to a pointer to the head of the list.
 * @idx: The index where the new node should be added (starting at 0).
 * @n: The integer value for the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 *
 * Description: inserts a new node with the given integer value at
 * the specified index in the list. If it's not possible to add the new node at
 * the specified index, it returns NULL without modifying the list.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	for (i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
