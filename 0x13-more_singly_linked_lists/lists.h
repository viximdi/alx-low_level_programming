#ifndef LIST_H
#define LIST_H
#include <stddef.h>
/**
 * struct listint_s - Structure for a singly linked list node.
 * @n: An integer value held by the node.
 * @next: A pointer to the next node in the list.
 *
 * Description: This structure defines a node for a singly linked list.
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

listint_t *add_nodeint(listint_t **head, const int n);
size_t listint_len(const listint_t *h);
size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t **reallocate_array(listint_t **old_array, size_t old_size, listint_t *new_element);
const listint_t **reallocate_list(const listint_t **old_list, size_t size, const listint_t *new_node);
size_t free_listint_safe(listint_t **h);
listint_t *reverse_listint(listint_t **head);
listint_t *find_listint_loop(listint_t *head);
size_t print_listint_safe(const listint_t *head);
#endif
