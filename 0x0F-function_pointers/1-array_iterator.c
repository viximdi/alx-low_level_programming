#include "function_pointers.h"

/**
 * array_iterator - Executes function on each element of an array.
 * @array: Array to execute function on.
 * @size: Size of the array.
 * @action: Pointer to the function to be used.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;

	if (array && action)
	{
		n = 0;
		while (n < size)
		{
			action(array[n]);
			n++;
		}
	}
}
