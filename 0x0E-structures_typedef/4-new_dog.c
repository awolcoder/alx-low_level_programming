#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * _strdup - duplicates a string by allocating memory
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string or NULL if fails
 */
char *_strdup(const char *str)
{
    char *copy;
    size_t len, i;

    if (str == NULL)
        return (NULL);

    len = strlen(str);
    copy = malloc(len + 1);
    if (copy == NULL)
        return (NULL);

    for (i = 0; i < len; i++)
        copy[i] = str[i];
    copy[len] = '\0';

    return (copy);
}

/**
 * new_dog - creates a new dog_t struct with copied name and owner
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog_t or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d;

    d = malloc(sizeof(dog_t));
    if (d == NULL)
        return (NULL);

    d->name = _strdup(name);
    if (d->name == NULL)
    {
        free(d);
        return (NULL);
    }

    d->owner = _strdup(owner);
    if (d->owner == NULL)
    {
        free(d->name);
        free(d);
        return (NULL);
    }

    d->age = age;

    return (d);
}
