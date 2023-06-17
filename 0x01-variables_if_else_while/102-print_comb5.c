#include <stdio.h>
/**
 * print_combinations - Prints all possible combinations of two digits
 */
void print_combinations(void)
{
int num1, num2;

for (num1 = 0; num1 < 100; num1++)
{
for (num2 = num1; num2 < 100; num2++)
{
putchar('0' + num1 / 10);
putchar('0' + num1 % 10);
putchar(' ');
putchar('0' + num2 / 10);
putchar('0' + num2 % 10);

if (num1 != 99 || num2 != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
/**
 * main - Entry point of the program
 *
 * Return: Exit status of the program
 */
int main(void)
{
print_combinations();
return (0);
}
