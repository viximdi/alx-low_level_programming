#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @s: The input string.
 *
 * Return: The address of the modified string.
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char separators[] = " \t\n,;.!?\"(){}";

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
				*(s + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (separators[j] == *(s + i - 1))
						*(s + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (s);
}

