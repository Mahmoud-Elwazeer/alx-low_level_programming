#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Names & ages & owners of dogs
 * @name: The Name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer to struct
 * @name: Name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
