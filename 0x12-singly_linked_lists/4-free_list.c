#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head of the list to be freed.
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		/* Free the string in the current node */
		free(current->str);
		/* Free the current node */
		free(current);
		current = next;
	}
}
