#include <stdio.h>

/**
 * main - Entry point of the program.
 *        Prints all arguments it receives.
 *
 * @argc: The argument count.
 * @argv: An array of strings representing the arguments.
 *
 * Return: (0) indicating successful execution.
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

