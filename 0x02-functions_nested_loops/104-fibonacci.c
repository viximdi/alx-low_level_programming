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
	int count = 2;

	a[499] = 1;
	b[499] = 2;

	printf("%d, %d", a[499], b[499]);

	while (count < 98)
	{
		int carry = 0;
		for (int i = 499; i >= 0; i--)
		{
			int sum = a[i] + b[i] + carry;
			result[i] = sum % 1000000000;
			carry = sum / 1000000000;
		}
		printf(", ");
		int start = 0;
		for (int i = 0; i < 500; i++)
		{
			if (result[i] != 0)
			{
				start = i;
				break;
			}
		}
		for (int i = start; i < 500; i++)
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
	for (int i = 0; i < 500; i++)
	{
		destination[i] = source[i];
	}
}

