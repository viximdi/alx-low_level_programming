#include "main.h"
/**
 * rev_string -  reverses a string.
 * @s: pointer to the string variable to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	int x;

	while (s[len] != '\0')
	{
		len++;
	}
	for (x = 0; x < len / 2; x++)
	{
		char sTv = s[x];

		s[x] = s[len - x - 1];
		s[len - x - 1] = sTv;
	}
}
