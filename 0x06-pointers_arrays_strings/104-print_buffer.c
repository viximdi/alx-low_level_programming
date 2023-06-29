#include "main.h"
#include <stdio.h>

/**
 * print_line - Prints a line of a buffer
 * @c: Buffer to print
 * @s: Number of bytes of buffer to print
 * @l: Line of buffer to print
 *
 * Description: This function prints a line of the buffer 'c' with 's' bytes,
 * starting from line 'l'. It prints the hexadecimal representation of the
 * bytes followed by the corresponding ASCII characters.
 *
 * Return: void
 */
void print_line(char *c, int s, int l)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
		if (j <= s)
			printf("%02x", c[l * 10 + j]);
		else
			printf("  ");

		if (j % 2)
			putchar(' ');
	}

	for (k = 0; k <= s; k++)
	{
		if (c[l * 10 + k] > 31 && c[l * 10 + k] < 127)
			putchar(c[l * 10 + k]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - Prints a buffer
 * @b: Buffer to print
 * @size: Size of the buffer
 *
 * Description: This function prints the buffer 'b' with 'size' bytes. It
 * divides the buffer into lines and calls the 'print_line' function to print
 * each line.
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);

		if (i < size / 10)
			print_line(b, 9, i);
		else
			print_line(b, size % 10 - 1, i);

		putchar('\n');
	}

	if (size == 0)
		putchar('\n');
}

