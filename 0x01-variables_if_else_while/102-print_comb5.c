#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	int number_1;
	int number_2;

	for (number_1 = 0; number_1 <= 99; number_1++)
	{
		for (number_2 = number_1 + 1; number_2 <= 99; number_2++)
		{
			if (number_1 != number_2)
			{
				putchar('0' + number_1 / 10);
				putchar('0' + number_1 % 10);
				putchar(' ');
				putchar('0' + number_2 / 10);
				putchar('0' + number_2 % 10);

				if (number_1 != 98 || number_2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
