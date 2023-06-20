#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char _putchar(char n);
char char_arr[] = "_putchar";
int size = sizeof(char_arr) / sizeof(char_arr[0]);
int i;

for (i = 0; i < size; i++)
{
_putchar(char_arr[i]);
}
_putchar('\n');
return (0);
}
