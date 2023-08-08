#include <stdio.h>
#include <stdlib.h>
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

