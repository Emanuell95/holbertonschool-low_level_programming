#include "lists.h"
#include <stdlib.h> /* For free */

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Pointer to the head of the doubly linked list
 *
 * Description: This function traverses the list, frees each node, and 
 *              updates the head pointer to NULL once all nodes are freed.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	/* Traverse the list and free each node */
	while (head != NULL)
	{
		temp = head;
		head = head->next; /* Move to the next node */
		free(temp);        /* Free the current node */
	}
}
