#include "main.h"

/**
 * string_toupper - Converts all lowercase characters in a string to uppercase.
 * @s: The input string.
 *
 * Return: The modified string.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}

