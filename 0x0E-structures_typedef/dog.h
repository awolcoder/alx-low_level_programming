#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a dog's attributes
 * @name: The name of the dog (char *)
 * @age: The age of the dog (float)
 * @owner: The owner of the dog (char *)
 *
 * Description: This structure defines the basic attributes of a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
