#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates array of chars and initializes it
 * with a specific char.
 *
 * @size: Size of the array to be created.
 * @c: Character to initialize the array with.
 *
 * Return: NULL if size = 0. Pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	int n;

	arr = (char *)malloc(size * sizeof(char));

	if (size == 0 || arr == 0)
	{
		return (NULL);
	}

	for (n = 0; n < size; n++)
	{
		arr[n] = c;
	}
	return (arr);
}
