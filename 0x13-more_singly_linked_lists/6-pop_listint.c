#include "lists.h"

/**
 * pop_listint - Removes the first node from a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: The value stored in the removed node, or 0 if the list is empty.
 *
 * Description: This function removes the first node from a listint_t list.
 * If the list is empty, it returns 0.
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
