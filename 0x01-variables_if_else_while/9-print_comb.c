#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Exit status of the program
 */
int main(void)
{
int number1, number2;

for (number1 = 0; number1 < 10; number1++)
{
for (number2 = 0; number2 < 10; number2++)
{
putchar(number1 + '0');
putchar(number2 + '0');

if (number1 != 9 || number2 != 9)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
