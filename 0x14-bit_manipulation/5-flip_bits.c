#include "main.h"

/**
 * flip_bits - Counts the number of different bits between two numbers.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits that differ between the two numbers.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = n ^ m;
	unsigned int count = 0;

	while (difference)
	{
		count += difference & 1;
		difference >>= 1;
	}

	return (count);
}
