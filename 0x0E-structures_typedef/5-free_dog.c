#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a dog_t struct and its allocated members
 * @d: pointer to dog_t to free
 */
void free_dog(dog_t *d)
{
    if (d == NULL)
        return;

    free(d->name);
    free(d->owner);
    free(d);
}
