#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node 
 * at a given position in the list.
 * @head: Double pointer to the head of the list.
 * @idx: Index of the node to be inserted.
 * @n: Value of the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp = *head;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		temp = temp->next;
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
