#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * create_file - Creates a file with given content and permissions.
 * @filename: The name of the file to create.
 * @text_content: A NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 *         (file cannot be created, file cannot be written, write "fails", etc...)
 *         The created file must have permissions: rw-------.
 *         If the file already exists, do not change the permissions.
 *         If the file already exists, truncate it.
 *         If filename is NULL, return -1.
 *         If text_content is NULL, create an empty file.
 */
int create_file(const char *filename, char *text_content) {
	if (filename == NULL)
		return (-1);

	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL) {
		int i;
		for (i = 0; text_content[i] != '\0'; i++)
			continue;
		ssize_t bytes_written = write(fd, text_content, i);
		if (bytes_written == -1) {
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
