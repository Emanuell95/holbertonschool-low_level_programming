#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A pointer to the head of the list.
 * @idx: The index where the new node should be added.
 * @n: The data to insert in the new node.
 *
 * Return: The address of the new node, or NULL if it failed or if
 *         it is not possible to add the node at index `idx`.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *temp = *h;
    unsigned int i;

    if (idx == 0)
        return (add_dnodeint(h, n));

    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);

    new_node->n = n;

    for (i = 0; temp != NULL && i < idx - 1; i++)
    {
        temp = temp->next;
    }

    if (!temp)
    {
        free(new_node);
        return (NULL);
    }

    new_node->next = temp->next;
    new_node->prev = temp;
    if (temp->next)
        temp->next->prev = new_node;

    temp->next = new_node;

    return (new_node);
}
