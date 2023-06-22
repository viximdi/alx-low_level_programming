#include "main.h"
/**
 * print_diagonal - straight line in the terminal.
 * @n: is the number of times the character _ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		int space;

		for (space = 0; space < i; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
