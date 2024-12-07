#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list.
 * @h: A pointer to the head of the list.
 * @n: The data to insert in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **h, int n)
{
    dlistint_t *new_node;

    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);

    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = *h;

    if (*h)
        (*h)->prev = new_node;

    *h = new_node;

    return (new_node);
}
