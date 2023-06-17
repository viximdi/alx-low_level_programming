#include <stdio.h>
/**
 * print_combinations - Prints all possible combinations of two digits
 */
void print_combinations(void)
{
int digit1, digit2, digit3;

for (digit1 = 0; digit1 < 10; digit1++)
{
for (digit2 = digit1 + 1; digit2 < 10; digit2++)
{
for (digit3 = digit2 + 1; digit3 < 10; digit3++)
{
putchar('0' + digit1);
putchar('0' + digit2);
putchar('0' + digit3);

if (digit1 != 7 || digit2 != 8 || digit3 != 9)
{
putchar(',');
putchar(' ');
}
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
putchar('\n');
return (0);
}
