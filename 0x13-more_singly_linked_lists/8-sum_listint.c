#include "lists.h"

/**
 * sum_listint - Computes the sum of the integer elements in a listint_t list.
 * @head: A pointer to the head of the list.
 *
 * Return: The sum of all integer elements in the list.
 *
 * Description: This function iterates through a listint_t list, adding up all
 * the integer values of the nodes in the list, and returns the resulting sum.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
