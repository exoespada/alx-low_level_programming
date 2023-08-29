#include "lists.h"

/**
 * print_listint_safe - prints all the elements of a linked list
 * @head: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *cursor = head;
	size_t count = 0;

	while (cursor)
	{
		printf("[%p] %d\n", (void *)cursor, cursor->n);
		count++;
		cursor = cursor->next;
	}
	return (count);
}

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

/**
 * check_ptr - checks if a pointer is in an array
 * @ptr: pointer to be checked
 * @array: array to be checked in
 * @size: size of the array
 *
 * Return: 1 on success, 0 on fail
 */
int check_ptr(const listint_t *ptr, listint_t **array, unsigned int size)
{
	while (size--)
	{
		if (ptr == array[size])
			return (1);
	}
	return (0);
}

