#include "lists.h"
#include <stdlib.h>

/**
 * reallocate_array - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @old_array: the old array to append
 * @old_size: size of the old array
 * @new_element: new node to add to the array
 *
 * Return: pointer to the new array
 */
listint_t **reallocate_array(listint_t **old_array, size_t old_size, listint_t *new_element)
{
	listint_t **new_array;
	size_t i;

	new_array = malloc((old_size + 1) * sizeof(listint_t *));
	if (new_array == NULL)
	{
		free(old_array);
		exit(98);
	}

	for (i = 0; i < old_size; i++)
		new_array[i] = old_array[i];

	new_array[i] = new_element;
	free(old_array);
	return (new_array);
}

/**
 * free_listint_safe - frees a listint_t linked list.
 * @head: double pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t num = 0;
	size_t i;
	listint_t **node_array = NULL;
	listint_t *next_node;

	if (head == NULL || *head == NULL)
		return (num);

	while (*head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (*head == node_array[i])
			{
				*head = NULL;
				free(node_array);
				return (num);
			}
		}

		num++;
		node_array = reallocate_array(node_array, num - 1, *head);
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}

	free(node_array);
	return (num);
}

