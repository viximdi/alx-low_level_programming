#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Reads and prints a specified number of letters from a file.
 * @filename: Name of the file to read from.
 * @letters: Number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 *         0 if the file cannot be opened or read, if @filename is NULL,
 *         or if write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ch;

	FILE *fptr;

	letters = 0;

	fptr = fopen(filename, "r");

	if (fptr != NULL)
	{
		ch = fgetc(fptr);

		while (ch != EOF)
		{
			putchar(ch);
			ch = fgetc(fptr);
			letters++;
		}

		fclose(fptr);
	}
	else
	{
		return (0);
	}

	return (letters);
}

