#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "file_utils.h"

/**
 * print_usage_error - Print a usage error message.
 * @program_name: The name of the program.
 */
void print_usage_error(const char *program_name)
{
	dprintf(2, "Usage: %s file_from file_to\n", program_name);
}

/**
 * copy_file - Copy the contents of one file to another.
 * @src_filename: The name of the source file.
 * @dest_filename: The name of the destination file.
 * Return: 0 on success, or exit codes on error.
 */
int copy_file(const char *src_filename, const char *dest_filename)
{
	int src_fd, dest_fd;
	char buffer = 1024;
	ssize_t bytes_read, bytes_written;

	src_fd = open(src_filename, O_RDONLY);
	if (src_fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", src_filename);
		return (98);
	}

	dest_fd = open(dest_filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest_fd == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", dest_filename);
		close(src_fd);
		return (99);
	}

	while ((bytes_read = read(src_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(2, "Error: Can't write to file %s\n", dest_filename);
			close(src_fd);
			close(dest_fd);
			return (99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", src_filename);
		close(src_fd);
		close(dest_fd);
		return (98);
	}

	close(src_fd);
	close(dest_fd);
	return (0);
}
