#include "main.h"
/**
 * swap_int -  swaps the values of two integers.
 * @a: pointer to the integer to be swapped
 * @b: pointer to the integer to be swapped
 */
void swap_int(int *a, int *b)
{
	int A = *a;
	*a = *b;
	*b = A;
}
