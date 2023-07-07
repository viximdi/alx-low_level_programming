#include <stdio.h>

/**
 * main - Entry point of the program.
 *        Prints the number of arguments passed into it.
 *
 * @argc: The argument count.
 * @argv: An array of strings representing the arguments.
 *
 * Return: (0) indicating successful execution.
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
