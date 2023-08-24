#include "lists.h"

/**
 * list_len - finds the number of elements in a linked list
 *@h: pointer to the list
 *
 *Return: the number of elements
 */
size_t list_len(const list_t *h)
{
    size_t element_counter = 0;

    for (; h; h = h->next, element_counter++);

    return element_counter;
}

