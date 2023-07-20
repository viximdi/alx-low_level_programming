#include "variadic_functions.h"

/**
 * print_strings - Prints strings separated by a specified separator.
 * @separator: A string used to separate the strings (can be an empty string).
 * @n: The number of unnamed parameters (strings) to be printed.
 * Return: Nothing (void function).
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list args_list;

	va_start(args_list, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(args_list, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args_list);
}
