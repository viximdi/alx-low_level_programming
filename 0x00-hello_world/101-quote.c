#include <unistd.h>
/**
 * main - Entry point of the program
 *
 * Return: Exit status of the program
 */
int main(void)
{
	char *strgs = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
		write(2, strgs, 65);
	return (1);
}
