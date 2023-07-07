#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: resultant string
 * @src: string to be appended
 * @n: conditon to check
 * Return: pointer to the resulting string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_copy = dest;
	int len = 0;
	int i;

	while (*dest != '\0')
	{
		dest++;
		len++;
	}

	for (i = 0; (i < n && *src != '\0'); i++)
	{
		*dest = *src;
		dest++;
		src++;
		len++;
	}

	*dest = '\0';
	return (dest_copy);
}
