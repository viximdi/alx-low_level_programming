#include "main.h"
/**
 * puts2 -  prints every other character of a string
 * @str: pointer for string varible
 * Return: void
 */
void puts2(char *str)
{
	int n;


	for (n = 0; str[n] != '\0';)
	{
		_putchar(str[n]);
		n += 2;
	}
	_putchar('\n');
}
