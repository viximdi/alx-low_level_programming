#include "main.h"
/**
 * _strcpy - copies the string pointed to by src pointer param
 * @dest: pointer to the copy destination
 * @src: pointer to variable to be copied
 * Return: the pointer to dest
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
