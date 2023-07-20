#include "variadic_functions.h"

/**
 * sum_all_numbers - Sums all the numbers passed as arguments.
 * @n: The number of parameters passed.
 * Return: The sum of all the numbers.
 */

int sum_all_numbers(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list args_list;

	va_start(args_list, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(args_list, int);

	va_end(args_list);

	return (sum);
}
