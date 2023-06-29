#include "main.h"

/**
 * rot13 - Encodes a string into ROT13.
 * @s: String to encode.
 *
 * Return: Address of the encoded string.
 */
char *rot13(char *s)
{
	int i, j;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (alphabet[j] == *(s + i))
			{
				*(s + i) = rot13[j];
				break;
			}
		}
	}
	return (s);
}

