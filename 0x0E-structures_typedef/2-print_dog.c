#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog to print
 *
 * If d is NULL, print nothing.
 * If any element is NULL, print (nil).
 */
void print_dog(struct dog *d)
{
    if (d == NULL)
        return;

    printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
    printf("Age: %f\n", d->age);
    printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
