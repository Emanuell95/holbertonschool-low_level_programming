#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t list
 * @head: Pointer to the head of the doubly linked list
 *
 * Return: The sum of all the data (n) in the list, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	/* Traverse the list and sum the values of n */
	while (temp != NULL)
	{
		sum += temp->n; /* Add the data (n) of the current node */
		temp = temp->next; /* Move to the next node */
	}

	/* Return the sum, or 0 if the list is empty */
	return (sum);
}
