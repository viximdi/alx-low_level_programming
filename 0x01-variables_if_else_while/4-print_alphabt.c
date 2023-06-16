#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * Return: Exit status of the program
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
		if (letter == 'd' || letter == 'p')
		{
			letter += 1;
			continue;
		}
	}
	putchar('\n');
	return (0);
}
