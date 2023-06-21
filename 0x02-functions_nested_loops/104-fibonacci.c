#include <stdio.h>

void add(unsigned int num1[], unsigned int num2[], unsigned int result[]);
void print_array(unsigned int num[]);
void copy_array(unsigned int source[], unsigned int destination[]);

void print_fibonacci(int n)
{
	unsigned int a[500] = {0};
	unsigned int b[500] = {0};
	unsigned int result[500] = {0};

	a[499] = 1;
	b[499] = 2;

	printf("%d, %d", a[499], b[499]);

	int count = 2;
	while (count < n) {
		add(a, b, result);
		print_array(result);

		copy_array(b, a);
		copy_array(result, b);

		count++;
	}

	printf("\n");
}

void add(unsigned int num1[], unsigned int num2[], unsigned int result[])
{
	int carry = 0;
	for (int i = 499; i >= 0; i--) {
		int sum = num1[i] + num2[i] + carry;
		result[i] = sum % 10;
		carry = sum / 10;
	}
}

void copy_array(unsigned int source[], unsigned int destination[])
{
	for (int i = 0; i < 500; i++) {
		destination[i] = source[i];
	}
}

void print_array(unsigned int num[])
{
	int start = 0;
	while (start < 500 && num[start] == 0) {
		start++;
	}

	for (int i = start; i < 500; i++) {
		printf("%d", num[i]);
	}

	if (start == 500) {
		printf("0");
	}

	printf(", ");
}

int main(void)
{
	print_fibonacci(98);

	return 0;
}

