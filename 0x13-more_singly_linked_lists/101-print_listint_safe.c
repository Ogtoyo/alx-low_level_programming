#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	if (head == NULL)
		return (0);

	const listint_t *tortoise = head, *hare = head;
	size_t nodes = 0;

	while (hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		nodes++;

		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
				nodes++;
			}

			return nodes;
		}
	}

	return 0;
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = looped_listint_len(head);

	for (size_t i = 0; head != NULL; i++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;

		if (nodes > 0 && i >= nodes)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}

	return nodes;
}
