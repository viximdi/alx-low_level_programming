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
	int base_10;

	for (base_10 = 0; base_10 < 10; base_10++)
	{
		printf("%d", base_10);
	}
	putchar('\n');
	return (0);
}
