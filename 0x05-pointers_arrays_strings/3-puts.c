#include "main.h"
/**
 * _puts -  prints a string, followed by a new line, to stdout
 * @str: pointer to the string variable
 * Return: void
 */
void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
}
