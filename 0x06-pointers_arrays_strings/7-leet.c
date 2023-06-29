#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: String to encode.
 *
 * Return: Address of the encoded string.
 */
char *leet(char *s)
{
	int i, j;
	char leet_letters[] = "aAeEoOtTlL";
	char leet_digits[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (leet_letters[j] == s[i])
				s[i] = leet_digits[j];
		}
	}
	return (s);
}

