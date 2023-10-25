#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	if (head == NULL)
		return (0);

	printf("[%p] %d\n", (void *)head, head->n);

	if (head <= head->next)
	{
		printf("-> [%p] %d\n", (void *)head->next, head->next->n);
		exit(98);
	}

	return (1 + print_listint_safe(head->next));
}
