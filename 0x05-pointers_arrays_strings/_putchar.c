#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to be written
 */

void _putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}
