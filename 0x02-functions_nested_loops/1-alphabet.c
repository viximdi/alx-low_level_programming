/**
 * print_alphabet - prints the alphabet, in lowercase
 *
 * Returns void.
 */
void print_alphabet(void)
{
char _putchar(char n);
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
return;
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
print_alphabet();
return (0);
}
