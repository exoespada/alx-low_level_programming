#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list
 * @h: A pointer to the head of the list
 *
 * Return: the number of elements in the listint_t list
 */
size_t listint_len(const listint_t *h)
{
    size_t node_counter = 0;
    for (; h; h = h->next, node_counter++);
    return node_counter;
}

