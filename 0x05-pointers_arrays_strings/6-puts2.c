#include "main.h"
/**
 * puts2 -  prints every other character of a string
 * @str: pointer for string varible
 * Return: void
 */
void puts2(char *str)
{
	int n;


	for (n = 0; str[n] != '\0'; n++)
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
