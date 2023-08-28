#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: pointer to the head of the list
 * @index: index of the node to be deleted
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current = *head;
    listint_t *shift_node;

    // Empty list or invalid index
    if (!current || index >= listint_len(*head))
        return (-1);

    // Delete head node
    if (index == 0)
    {
        *head = current->next;
        free(current);
        return (1);
    }

    // Traverse list till node before the target node
    for (unsigned int i = 0; i < index - 1; i++)
    {
        if (!current->next)
            return (-1);  // Reached end before reaching desired index
        current = current->next;
    }

    // Delete the node
    shift_node = current->next;
    current->next = shift_node->next;
    free(shift_node);

    return (1);
}

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
    size_t counter = 0;
    while (h)
    {
        counter++;
        h = h->next;
    }
    return counter;
}

