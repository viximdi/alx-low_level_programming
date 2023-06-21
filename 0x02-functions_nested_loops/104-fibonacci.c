#include <stdio.h>

/**
 * print_fibonacci - Prints the first n Fibonacci numbers
 * @n: The number of Fibonacci numbers to be printed
 */
void print_fibonacci(int n)
{
	int first = 1;
	int second = 2;
	int count = 2;

	printf("%d, %d", first, second);

	while (count < n)
	{
		int next = first + second;
		printf(", %d", next);

		first = second;
		second = next;
		count++;
	}

	printf("\n");
}

/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */
int main(void)
{
	print_fibonacci(98);

	return 0;
}

