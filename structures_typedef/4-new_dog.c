#include <stdio.h>
#include <stdlib.h>
#include <string.h> // For strcpy and strlen

typedef struct dog {
    char *name;
    float age;
    char *owner;
} dog_t;

/**
 * new_dog - Creates a new dog with the given details
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: A pointer to the new dog (dog_t *), or NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner) {
    dog_t *d;

    // Allocate memory for a new dog
    d = malloc(sizeof(dog_t));
    if (d == NULL) {
        return NULL; // If malloc fails, return NULL
    }

    // Allocate memory for the name and copy it
    d->name = malloc(strlen(name) + 1); // +1 for the null terminator
    if (d->name == NULL) {
        free(d); // Free the previously allocated memory for dog_t
        return NULL;
    }
    strcpy(d->name, name); // Copy the name into the newly allocated memory

    // Allocate memory for the owner and copy it
    d->owner = malloc(strlen(owner) + 1); // +1 for the null terminator
    if (d->owner == NULL) {
        free(d->name); // Free the previously allocated memory for name
        free(d); // Free the memory for dog_t
        return NULL;
    }
    strcpy(d->owner, owner); // Copy the owner into the newly allocated memory

    // Set the age of the dog
    d->age = age;

    return d;
}
