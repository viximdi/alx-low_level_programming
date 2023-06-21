#include <stdio.h>

void copy_array(unsigned int source[], unsigned int destination[]);
void print_fibonacci();

int main()
{
	print_fibonacci();

	return 0;
}

void print_fibonacci()
{
	unsigned int a[500] = {0};
	unsigned int b[500] = {0};
	unsigned int result[500] = {0};
	unsigned int carry = 0;
	unsigned int sum;
	int count = 2;
	int i;

	a[499] = 1;
	b[499] = 2;

	printf("%u, %u", a[499], b[499]);

	while (count < 98)
	{
		carry = 0;

		for (i = 499; i >= 0; i--)
		{
			sum = a[i] + b[i] + carry;
			result[i] = sum % 1000000000;
			carry = sum / 1000000000;
		}

		printf(", ");

		int start = 0;

		for (i = 0; i < 500; i++)
		{
			if (result[i] != 0)
			{
				start = i;
				break;
			}
		}

		for (i = start; i < 500; i++)
		{
			if (i == start)
			{
				printf("%u", result[i]);
			}
			else
			{
				printf("%09u", result[i]);
			}
		}

		count++;
		copy_array(b, a);
		copy_array(result, b);
	}

	printf("\n");
}

void copy_array(unsigned int source[], unsigned int destination[])
{
	int i;

	for (i = 0; i < 500; i++)
	{
		destination[i] = source[i];
	}
}

