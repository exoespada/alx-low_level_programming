#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: pointer to the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
    size_t node_counter = 0;

    while (h != NULL)
    {
        if (h->str)
            printf("[%d] %s\n", h->len, h->str);
        else
            printf("[0] (nil)\n");

        node_counter++;
        h = h->next;
    }

    return node_counter;
}

