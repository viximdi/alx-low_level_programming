#include "dog.h"

/**
 * init_dog - Initializes a structure of type dog
 * @d: Pointer to the structure
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner of the dog
 *
 * Description: This function initializes a structure of type dog
 * with the provided name, age, and owner information.
 *
 * Return: void
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
