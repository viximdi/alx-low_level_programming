#include <unistd.h>
/* main - entry point */
int main(void)
{
	char *strings = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
		write(2, strings, 65);
	return (1);
}
