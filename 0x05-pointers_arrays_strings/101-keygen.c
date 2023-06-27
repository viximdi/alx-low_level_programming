#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char secret[84];
	int idx = 0, total = 0, diff_half1, diff_half2;

	srand(time(0));

	while (total < 2772)
	{
		secret[idx] = 33 + rand() % 94;
		total += secret[idx++];
	}

	secret[idx] = '\0';

	if (total != 2772)
	{
		diff_half1 = (total - 2772) / 2;
		diff_half2 = (total - 2772) / 2;
		if ((total - 2772) % 2 != 0)
			diff_half1++;

		for (idx = 0; secret[idx]; idx++)
		{
			if (secret[idx] >= (33 + diff_half1))
			{
				secret[idx] -= diff_half1;
				break;
			}
		}

		for (idx = 0; secret[idx]; idx++)
		{
			if (secret[idx] >= (33 + diff_half2))
			{
				secret[idx] -= diff_half2;
				break;
			}
		}
	}

	printf("%s", secret);

	return 0;
}

