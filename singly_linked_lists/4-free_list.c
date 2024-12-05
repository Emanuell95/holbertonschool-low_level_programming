#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next; /* Store the next node */
		free(head->str);   /* Free the duplicated string */
		free(head);        /* Free the current node */
		head = temp;       /* Move to the next node */
	}
}
