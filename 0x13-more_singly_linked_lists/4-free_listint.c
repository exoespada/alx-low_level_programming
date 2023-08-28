#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
    listint_t *trans_node;

    while (head != NULL)
    {
        trans_node = head;
        head = head->next;
        free(trans_node);
    }
}

