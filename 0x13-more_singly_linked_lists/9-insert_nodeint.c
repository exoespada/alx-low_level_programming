#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a list.
 * @head: Pointer to the pointer to the head of the list.
 * @idx: Index where the new node should be inserted, starting from 0.
 * @n: Data for the new node.
 *
 * Return: Address of the new node, or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node = *head;
	unsigned int i;

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

	for (i = 0; i < idx - 1; ++i)
	{
		if (current_node == NULL)
			return (NULL);
		current_node = current_node->next;
	}

	if (current_node == NULL)
		return (NULL);

	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}

