#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 *@head: pointer to the head of the list
 *@str: string to be added to the list
 *
 *Return: NULL in case of failure
 *or address or the element
 */
list_t *add_node_end(list_t **head, const char *str)
{
    int len = 0;
    list_t *new_node;
    list_t *last = *head;

    new_node = malloc(sizeof(list_t));
    if (!new_node)
        return NULL;

    new_node->str = strdup(str);
    if (!new_node->str)
    {
        free(new_node);
        return NULL;
    }

    while (str[len])
        len++;

    new_node->len = len;
    new_node->next = NULL;

    if (!last)
        *head = new_node;
    else
    {
        while (last->next)
            last = last->next;
        last->next = new_node;
    }

    return *head;
}

