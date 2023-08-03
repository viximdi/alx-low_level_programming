#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t list.
 *
 * @head: Double pointer to the head of the list.
 *
 * Return: The value of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int n = 0;

	if (head != NULL && *head != NULL)
	{
		listint_t *temp = *head;

		n = temp->n;
		*head = temp->next;
		free(temp);
	}

	return (n);
}
