#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: pointer to the head of the list
 * @n: number to be used as content
 *
 * Return: address of the newly added node or NULL if malloc fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *node = malloc(sizeof(listint_t));
    if (!node)
        return NULL;

    node->n = n;
    node->next = NULL;

    if (!*head)
    {
        *head = node;
        return node;
    }

    listint_t *scroll = *head;
    while (scroll->next)
        scroll = scroll->next;

    scroll->next = node;
    return node;
}

