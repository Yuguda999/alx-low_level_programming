#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: Prints a specified message to standard error.
 *
 * Return: Always 1.
 */
int main(void)
{
    char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t length = strlen(message);
    ssize_t half_length = length / 2;

    write(2, message, half_length);
    write(2, message + half_length, length - half_length);

    return (1);
}
