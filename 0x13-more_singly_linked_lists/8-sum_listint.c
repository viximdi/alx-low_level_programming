#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data (n) in a listint_t linked list.
 * @head: Pointer to the first node of the list.
 *
 * Return: The sum of all the data in the linked list.
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);

	int sum = head->n;

	listint_t *current = head->next;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
