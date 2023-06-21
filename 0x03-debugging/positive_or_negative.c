#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - check is no. is 0, - , +.
 *
 * Return: void
 */
int positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (i);
}
