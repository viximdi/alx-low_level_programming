#include "main.h"
/**
 * _strlen - that returns the length of a string.
 * @s: pointer to the string variable
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
