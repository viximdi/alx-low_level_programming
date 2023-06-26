#include "main.h"
/**
 * _strcpy - copies the string pointed to by src pointer param
 * @dest:
 * @src:
 * Return: 
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index]; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';
	return (dest);
}
