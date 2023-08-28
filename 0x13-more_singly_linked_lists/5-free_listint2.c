#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets the head to NULL
 * @head: pointer to the head of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
    listint_t *scroll;

    if (!head) return;

    while (*head)
    {
        scroll = *head;
        *head = (*head)->next;
        free(scroll);
    }
}

