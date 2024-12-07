#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - Custom implementation to calculate the length of a string.
 * @str: Pointer to the string.
 *
 * Return: Length of the string.
 */
size_t _strlen(const char *str)
{
    size_t len = 0;

    while (str[len] != '\0')
        len++;

    return len;
}

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Double pointer to the head of the linked list.
 * @str: String to be duplicated and added to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    char *new_str;

    if (str == NULL)
        return (NULL);

    /* Duplicate the string using strdup */
    new_str = strdup(str);
    if (new_str == NULL)
        return (NULL);

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
    {
        free(new_str); /* Free the duplicated string in case of failure */
        return (NULL);
    }

    /* Initialize the new node */
    new_node->str = new_str;
    new_node->len = _strlen(new_str); /* Use custom _strlen function */
    new_node->next = *head;

    /* Set the new node as the head */
    *head = new_node;

    return (new_node);
}