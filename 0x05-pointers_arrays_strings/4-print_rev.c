#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: pointer to the string variable to be printed
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;
	int x;

	while (s[length] != '\0')
	{
		length++;
	}


	for (x = length - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
