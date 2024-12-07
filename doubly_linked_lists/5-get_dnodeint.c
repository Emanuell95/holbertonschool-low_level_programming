#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Pointer to the head of the doubly linked list
 * @index: The index of the node, starting from 0
 *
 * Return: The address of the nth node, or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current_index = 0;
	dlistint_t *temp = head;

	/* Traverse the list until the desired index is reached */
	while (temp != NULL)
	{
		/* If the current index matches the desired index, return the node */
		if (current_index == index)
			return (temp);
		/* Move to the next node and increment the index */
		temp = temp->next;
		current_index++;
	}

	/* If the node doesn't exist, return NULL */
	return (NULL);
}
