#include <stdio.h>

void print_fibonacci(void)
{
	unsigned int a[500];
	unsigned int b[500];
	unsigned int result[500];
	int i;

	a[0] = 1;
	b[0] = 2;
	printf("%u, %u, ", a[0], b[0]);

	for (i = 2; i < 98; i++)
	{
		int j;
		int carry = 0;

		for (j = 0; j < 500; j++)
		{
			int sum = a[j] + b[j] + carry;
			result[j] = sum % 10000000000;
			carry = sum / 10000000000;
		}

		printf("%u", result[499]);

		for (j = 498; j >= 0; j--)
			printf("%.10u", result[j]);

		if (i != 97)
			printf(", ");

		for (j = 0; j < 500; j++)
		{
			a[j] = b[j];
			b[j] = result[j];
		}
	}

	printf("\n");
}

int main(void)
{
	print_fibonacci();
	return 0;
}

