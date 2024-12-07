#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list.
 * @h: A pointer to the head of the list.
 * @n: The data to insert in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **h, int n)
{
    dlistint_t *new_node, *temp;

    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    if (!*h)
    {
        new_node->prev = NULL;
        *h = new_node;
        return (new_node);
    }

    temp = *h;
    while (temp->next)
        temp = temp->next;

    temp->next = new_node;
    new_node->prev = temp;

    return (new_node);
}
