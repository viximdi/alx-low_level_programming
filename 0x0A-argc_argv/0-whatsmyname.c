#include <stdio.h>

/**
 * main - Entry point of the program.
 *        Prints the name of the program itself.
 *
 * @argc: The argument count.
 * @argv: An array of strings representing the arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return 0;
}
