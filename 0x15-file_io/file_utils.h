#ifndef FILE_UTILS_H
#define FILE_UTILS_H

/**
 * print_usage_error - Print a usage error message.
 * @program_name: The name of the program.
 */
void print_usage_error(const char *program_name);

/**
 * copy_file - Copy the contents of one file to another.
 * @src_filename: The name of the source file.
 * @dest_filename: The name of the destination file.
 * Return: 0 on success, or exit codes on error.
 */
int copy_file(const char *src_filename, const char *dest_filename);

#endif
