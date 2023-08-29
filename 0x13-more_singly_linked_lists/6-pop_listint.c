#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int return_value;

	if (!*head)
		return (0);

	temp = *head;
	return_value = temp->n;
	*head = temp->next;

	free(temp);

	return (return_value);
}

