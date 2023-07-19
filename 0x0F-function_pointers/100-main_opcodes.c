#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - Print opcodes of the program.
 * @a: Address of the main function.
 * @n: Number of bytes to print.
 */
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - Print opcodes of its own main function.
 * @argc: Number of arguments passed.
 * @argv: Array of pointers to arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
