#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Adds two integers.
 * @a: First integer.
 * @b: Second integer.
 * Return: Result of addition.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two integers.
 * @a: First integer.
 * @b: Second integer.
 * Return: Result of subtraction.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers.
 * @a: First integer.
 * @b: Second integer.
 * Return: Result of multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers.
 * @a: First integer.
 * @b: Second integer.
 * Return: Result of division.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - Modulo of two integers.
 * @a: First integer.
 * @b: Second integer.
 * Return: Result of modulo operation.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
