#include "main.h"
/**
 * _strcat - concanates strings
 * @dest: resulting string
 * @src: appended string
 * Return: pointer to the resulting string (dest)
 */
char *_strcat(char *dest, char *src)
{
	char *dest_copy = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (dest_copy);
}
