#include "main.h"

/**
 * _strlen_recursion - Calculates the length of a string using recursion
 * @s: Pointer to the string
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		len = 1 + _strlen_recursion(s + 1);
	}

	return (len);
}

