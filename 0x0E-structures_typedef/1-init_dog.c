#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 *
 * @d: input pointer to struct dog
 * @name: input for dog's name
 * @age: input for age of the dog
 * @owner:input for dog owner
 *
 * Return: returns 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
