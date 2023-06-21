#include <stdio.h>

/**
 * print_fibonacci - Prints the first n Fibonacci numbers
 * @n: The number of Fibonacci numbers to be printed
 */
void print_fibonacci(int n)
{
	unsigned long long first = 1;
	unsigned long long second = 2;
	int count = 2;

	printf("%llu, %llu", first, second);

	while (count < n)
	{
		unsigned long long next = first + second;

		printf(", %llu", next);

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

	return (0);
}

