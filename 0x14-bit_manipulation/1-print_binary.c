#include "main.h"

/**
 * print_binary_recursive - helper function for recursive binary printing
 * @n: num of prented
 * Return: void
 */
void print_binary_recursive(unsigned long int n)
{
	if (n > 1)
		print_binary_recursive(n >> 1);

	_putchar((n & 1) + '0');
}

/**
 * print_binary - prints the binary representation of a number
 * @n: num of prented
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_binary_recursive(n);
}
