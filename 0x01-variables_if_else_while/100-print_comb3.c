#include <stdio.h>
/**
 * print_combinations - Prints all possible combinations of two digits
 */
void print_combinations(void)
{
int digit1, digit2;

for (digit1 = 0; digit1 < 10; digit1++)
{
for (digit2 = 0; digit2 < 10; digit2++)
{
if (digit1 != digit2)
{
if (digit1 < digit2)
{
putchar('0' + digit1);
putchar('0' + digit2);

if (digit1 != 8 || digit2 != 9)
{
putchar(',');
putchar(' ');
}
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
return (0);
}
