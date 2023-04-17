#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: Struct with new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int size_name, size_owner;

	for (size_name = 0; *(name + size_name) != '\0'; size_name++)
		;
	for (size_owner = 0; *(owner + size_owner) != '\0'; size_owner++)
		;

	d = (dog_t *)malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = (char *)malloc(sizeof(size_name + 1));
	if (d->name == NULL)
		return (NULL);

	d->owner = (char *)malloc(sizeof(size_owner + 1));
	if (d->owner == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
