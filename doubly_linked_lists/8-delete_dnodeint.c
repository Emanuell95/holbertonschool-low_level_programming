#include "lists.h"
#include <stdlib.h> /* For free */

/**
 * delete_dnodeint_at_index - Deletes the node at a specific index of a dlistint_t list
 * @head: Double pointer to the head of the doubly linked list
 * @index: The index of the node to be deleted (starting at 0)
 *
 * Return: 1 if deletion succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int current_index = 0;

	/* If the list is empty, return -1 */
	if (temp == NULL)
		return (-1);

	/* If we want to delete the first node */
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}

	/* Traverse the list to find the node at the specified index */
	while (temp != NULL && current_index < index)
	{
		temp = temp->next;
		current_index++;
	}

	/* If the node does not exist (index out of range), return -1 */
	if (temp == NULL)
		return (-1);

	/* If we want to delete a middle or last node */
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	/* Free the memory of the node */
	free(temp);

	return (1);
}
