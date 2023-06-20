/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char _putchar(char n);
char letter = 'a';
int i;

for (i = 0; i < 10; i++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
}
_putchar('\n');
return;
}
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
print_alphabet_x10();
return (0);
}
