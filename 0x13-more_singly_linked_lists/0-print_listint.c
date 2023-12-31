#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: The list to check
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int count;

	count = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
