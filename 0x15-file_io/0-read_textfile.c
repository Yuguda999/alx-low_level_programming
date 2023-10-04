#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_and_write - Reads from a file descriptor and writes to standard output.
 * @fd: The file descriptor to read from.
 * @buffer: The buffer to store read data.
 * @letters: The number of letters to read and write.
 *
 * Return: (total_written) The total number of bytes written.
 */
static ssize_t read_and_write(int fd, char *buffer, size_t letters);

/**
 * read_textfile - Reads and prints a text file to standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters it should read and print.
 *
 * Return: (total_written) The actual number of letters read and printed,
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t total_written = 0;
	char buffer[1024];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	total_written = read_and_write(fd, buffer, letters);

	close(fd);

	return (total_written);
}

static ssize_t read_and_write(int fd, char *buffer, size_t letters)
{
	ssize_t bytes_read, bytes_written, total_written = 0;

	while (1)
	{
		bytes_read = read(fd, buffer, sizeof(buffer));

		if (bytes_read <= 0)
			break;

		if ((size_t)bytes_read > letters)
			bytes_read = letters;

		bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

		if (bytes_written == -1 || bytes_written != bytes_read)
			return (0);

		total_written += bytes_written;
		letters -= bytes_written;

		if (letters == 0)
			break;
	}

	if (bytes_read == -1)
		return (0);

	return (total_written);
}

