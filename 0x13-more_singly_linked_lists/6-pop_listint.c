#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the head of the list
 * Return: the deleted node data
 */
int pop_listint(listint_t **head)
{
    int content;

    if (!*head)
        return 0;

    content = (*head)->n;
    listint_t *del = *head;
    *head = (*head)->next;
    free(del);

    return content;
}

