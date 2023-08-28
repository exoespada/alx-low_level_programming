#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a specific position
 * @head: pointer to the head of the list
 * @idx: index of the node to be added
 * @n: content of the new node
 * Return: the address of the new node, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *created_node;
	listint_t *present = *head;
	unsigned int i = 0;

	if (!head || (idx != 0 && !present))
		return (NULL);

	created_node = malloc(sizeof(listint_t));
	if (!created_node)
		return (NULL);

	created_node->n = n;
	if (idx == 0)
	{
		created_node->next = *head;
		*head = created_node;
		return (created_node);
	}

	while (present && i < idx - 1)
	{
		present = present->next;
		i++;
	}

	if (!present)
	{
		free(created_node);
		return (NULL);
	}

	created_node->next = present->next;
	present->next = created_node;

	return (created_node);
}

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	for (; h; h = h->next, counter++);

	return counter;
}

