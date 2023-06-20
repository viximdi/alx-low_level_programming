#ifndef STDCLONE_H
#define STDCLONE_H
#include <unistd.h>
/**
 * _putchar - Outputs a character
 * @n: The character to be outputted
 *
 * Return: On success, returns the character value of the argument.
 * On error, returns -1 and errno is set appropriately.
 */
char _putchar(char n)
{
	/**
	 * write - Writes to a file descriptor
	 * @fd: The file descriptor to write to
	 * @buf: The buffer containing the data to be written
	 * @count: The number of bytes to write
	 *
	 * Return: On success, the number of bytes written is returned.
	 * On error, -1 is returned and errno is set appropriately.
	 */
	return (write(1, &n, 1));
}
#endif
