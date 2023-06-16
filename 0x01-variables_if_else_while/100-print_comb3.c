#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Exit status of the program
 */
int main(void)
{
int tens, ones;

for (tens = 0; tens < 10; tens++)
{
for (ones = 0; ones < 10; ones++)
{
if (tens == 1 && ones == 0)
{
continue;
}

putchar(tens + '0');
putchar(ones + '0');

if (tens != 9 || ones != 9)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
