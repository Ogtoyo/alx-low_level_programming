#include "lists.h"

/**
 * find_listint_loop - Find the start of a loop in a linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head, *hare = head;

	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (tortoise);
		}
	}

	return (NULL);
}
