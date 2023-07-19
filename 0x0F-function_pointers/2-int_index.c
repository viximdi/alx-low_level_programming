#include "function_pointers.h"

/**
 * int_index - Search for integer in array.
 * @array: Array to search.
 * @size: Size of the array.
 * @cmp: Comparison function.
 * Return: Index of 1st integer for which cmp
 * doesn't return 0. -1 if not found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n = 0;

	if (size > 0 && array && cmp)
	{
		while (n < size)
		{
			if (cmp(array[n]))
				return (n);
			n++;
		}
	}

	return (-1);
}
