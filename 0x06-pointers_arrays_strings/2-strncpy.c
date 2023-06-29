#include "main"
/**
 * _strncpy - copies a string.
 * @dest: destination string
 * @src: source string
 * @n: maximum number of characters to copy
 * Return: pointer to the resulting string (dest)
 */
char *_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return dest;
}

