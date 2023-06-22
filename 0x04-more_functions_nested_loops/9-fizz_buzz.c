#include <stdio.h>
/**
 * fizz_buzz_number - prints the numbers from 1 to 100
 * @n: number of iteration
 * Return: (n)
 */
int fizz_buzz_number(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
			putchar(' ');
			continue;
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			putchar(' ');
			continue;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');
			continue;
		}
		else
		{
			printf("%d", i);
			putchar(' ');
		}

	}
	putchar('\n');
	return (n);
}
/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{

	fizz_buzz_number(100);
	return (0);
}
