#ifndef DOG_H 
#define DOG_H

/**
 * struct dog - Defines a dog's attributes
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the dog's owner
 */
struct dog {
    char *name;
    float age;
    char *owner;
};

/* Define the alias dog_t for struct dog */
typedef struct dog dog_t;


/*Function prototypes */


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);



#endif
