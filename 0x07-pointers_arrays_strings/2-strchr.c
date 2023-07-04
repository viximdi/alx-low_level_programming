#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 *
 * @s: The initial segment to search within.
 * @accept: The set of bytes to match against.
 *
 * Return: The number of bytes in the initial segment that consist only
 *         of bytes from @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					count++;
			}
		}
		else
			return (count);
	}

	return (count);
}
