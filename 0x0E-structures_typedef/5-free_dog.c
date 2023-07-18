#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory for a dog structure
 * @d: Pointer to the dog structure to free
 *
 * Description: This function frees memory for a dog structure,
 * including dynamically allocated memory for its name and owner.
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
