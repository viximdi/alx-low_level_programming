#include "main.h"
/**
 * print_alphabet_x10 - prints  10 times the alphabet, in lowercase.
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
char letter = 'a';
int i;

for (i = 0; i < 10; i++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
_putchar('\n');
}
}
}
