#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * handle_error - Print an error message and exit.
 * @message: The error message format string.
 * @filename: The name of the file.
 * @exit_code: The exit code to use.
 */
void handle_error(const char *message, const char *filename, int exit_code) {
	dprintf(STDERR_FILENO, message, filename);
	exit(exit_code);
}

/**
 * copy_file - Copies the content of one file to another.
 * @file_from: The name of the source file.
 * @file_to: The name of the destination file.
 */
void copy_file(const char *file_from, const char *file_to) {
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		handle_error("Error: Can't read from file %s\n", file_from, 98);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1) {
		close(fd_from);
		handle_error("Error: Can't write to %s\n", file_to, 99);
	}

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0) {
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read) {
			close(fd_from);
			close(fd_to);
			handle_error("Error: Can't write to %s\n", file_to, 99);
		}
	}

	if (bytes_read == -1) {
		close(fd_from);
		close(fd_to);
		handle_error("Error: Can't read from file %s\n", file_from, 98);
	}

	close(fd_from);
	close(fd_to);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command line arguments.
 * @argv: An array of command line argument strings.
 *
 * Return: (0) on success, (97) for incorrect arguments, or other error codes.
 */
int main(int argc, char *argv[]) {
	if (argc != 3) {
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}
