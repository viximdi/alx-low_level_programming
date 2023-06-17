#include <stdio.h>
/**
 * print_combinations - Prints all possible combinations of two two-digits.
 */
void print_combinations(void)
{
int number1, number2;

for (number1 = 0; number1 <= 99; number1++)
{
for (number2 = number1; number2 <= 99; number2++)
{
if (number1 != number2)
{
putchar('0' + number1 / 10);
putchar('0' + number1 % 10);
putchar(' ');
putchar('0' + number2 / 10);
putchar('0' + number2 % 10);
putchar(',');
putchar(' ');
}
}
}
}

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
print_combinations();
return (0);
}
