#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d : This i Zero.\n", n);
	}
	else if (n > 0)
	{
		printf("%d : is a positive value.\n", n);
	}
	else
	{
		printf("%d : is a negative value.\n", n);
	}
	return (0);
}
